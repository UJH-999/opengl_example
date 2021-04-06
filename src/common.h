#ifndef _COMMON_H_
#define _COMMON_H_

#include <memory.h>
#include <string>
#include <optional>
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include <spdlog/spdlog.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define CLASS_PTR(klassName) \
class klassName; \
using klassName ## UPtr = std::unique_ptr<klassName>; \
using klassName ## Ptr = std::shared_ptr<klassName>; \
using klassName ## WPtr = std::weak_ptr<klassName>;

CLASS_PTR(Shader);
class Shader;
using ShaderUPtr = std::unique_ptr<Shader>;
using ShaderPtr = std::shared_ptr<Shader>;
using ShaderWPtr = std::weak_ptr<Shader>;

std::optional<std::string> LoadTextFile(const std::string& filename);

#endif // -COMMON_H_