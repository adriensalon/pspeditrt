
#include <cereal/archives/binary.hpp>
#include <cereal/archives/json.hpp>

#include <pspedit/core/id.hpp>

namespace pspedit {

template <typename Archive>
void serialize(Archive& archive, object_id& id)
{
    archive(cereal::make_nvp("low", id.low));
    archive(cereal::make_nvp("high", id.high));
}

template void serialize<cereal::JSONInputArchive>(cereal::JSONInputArchive& archive, object_id& id);
template void serialize<cereal::JSONOutputArchive>(cereal::JSONOutputArchive& archive, object_id& id);

template void serialize<cereal::BinaryInputArchive>(cereal::BinaryInputArchive& archive, object_id& id);
template void serialize<cereal::BinaryOutputArchive>(cereal::BinaryOutputArchive& archive, object_id& id);

template <typename Archive>
void serialize(Archive& archive, runtime_id& id)
{
    archive(cereal::make_nvp("low", id.low));
    archive(cereal::make_nvp("high", id.high));
}

template void serialize<cereal::JSONInputArchive>(cereal::JSONInputArchive& archive, runtime_id& id);
template void serialize<cereal::JSONOutputArchive>(cereal::JSONOutputArchive& archive, runtime_id& id);

template void serialize<cereal::BinaryInputArchive>(cereal::BinaryInputArchive& archive, runtime_id& id);
template void serialize<cereal::BinaryOutputArchive>(cereal::BinaryOutputArchive& archive, runtime_id& id);

}

