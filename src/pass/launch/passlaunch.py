from launch import LaunchDescription
from launch_ros.actions import Node
import os

def generate_launch_description():
    # 파라미터 파일 경로
    param_file = os.path.join(
        os.getenv('HOME'), 'ros2_ws', 'src', 'pass', 'config', 'control_params.yaml')

    return LaunchDescription([
        Node(
            package='pass',
            executable='control',
            name='control_node',
            parameters=[param_file],
            output='screen'
        ),
    ])
