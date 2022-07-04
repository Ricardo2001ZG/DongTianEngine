# 
# !/bin/zsh
#
# Project Environment Variable
export VULKAN_SDK=../../../SourceCode/Dev/ThirdParty/Vulkan/1.3.216.0/x86_64
export PATH=$VULKAN_SDK/bin:$PATH
export LD_LIBRARY_PATH=$VULKAN_SDK/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
export VK_LAYER_PATH=$VULKAN_SDK/etc/vulkan/explicit_layer.d

# Complier - Test
zsh $VULKAN_SDK/../vulkansdk vulkan-tools
print "\nComplier Finished!\n\n"

# vkcube - Test
$VULKAN_SDK/bin/vkcubepp
