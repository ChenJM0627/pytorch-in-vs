cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(modelproject)

SET(CMAKE_BUILE_TYPE RELEASE)

INCLUDE_DIRECTORIES(
D:/vscode/libtorch/include
D:/vscode/libtorch/include/torch/csrc/api/include
D:/openCV/build/include
D:/openCV/build/include/opencv2
)

SET(TORCH_LIBRARIES D:/vscode/libtorch/lib)
SET(OpenCV_LIBS D:/openCV/build/x64/vc15/lib)


LINK_DIRECTORIES(
${TORCH_LIBRARIES}
${OpenCV_LIBS}
)

add_executable(modelproject main.cpp)

target_link_libraries(modelproject
D:/vscode/libtorch/lib/c10.lib
D:/vscode/libtorch/lib/torch.lib
D:/vscode/libtorch/lib/caffe2_detectron_ops.lib
D:/vscode/libtorch/lib/caffe2_module_test_dynamic.lib
D:/vscode/libtorch/lib/c10d.lib
D:/vscode/libtorch/lib/torch_cpu.lib
D:/vscode/libtorch/lib/mkldnn.lib
D:/vscode/libtorch/lib/dnnl.lib
D:/vscode/libtorch/lib/libprotoc.lib
D:/vscode/libtorch/lib/libprotobuf.lib
D:/vscode/libtorch/lib/fbgemm.lib
D:/vscode/libtorch/lib/cpuinfo.lib
D:/vscode/libtorch/lib/libprotobuf-lite.lib
D:/vscode/libtorch/lib/gloo.lib
D:/vscode/libtorch/lib/asmjit.lib
D:/vscode/libtorch/lib/clog.lib
D:/openCV/build/x64/vc15/lib/opencv_world450.lib
)
set_property(TARGET modelproject  PROPERTY CXX_STANDARD 11)