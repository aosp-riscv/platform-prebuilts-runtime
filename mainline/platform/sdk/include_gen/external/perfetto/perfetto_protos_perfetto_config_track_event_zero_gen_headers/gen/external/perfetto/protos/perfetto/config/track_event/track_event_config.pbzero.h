// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_TRACK_EVENT_TRACK_EVENT_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_TRACK_EVENT_TRACK_EVENT_CONFIG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class TrackEventConfig_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  TrackEventConfig_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit TrackEventConfig_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit TrackEventConfig_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_disabled_categories() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> disabled_categories() const { return GetRepeated<::protozero::ConstChars>(1); }
  bool has_enabled_categories() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> enabled_categories() const { return GetRepeated<::protozero::ConstChars>(2); }
  bool has_disabled_tags() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> disabled_tags() const { return GetRepeated<::protozero::ConstChars>(3); }
  bool has_enabled_tags() const { return at<4>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> enabled_tags() const { return GetRepeated<::protozero::ConstChars>(4); }
};

class TrackEventConfig : public ::protozero::Message {
 public:
  using Decoder = TrackEventConfig_Decoder;
  enum : int32_t {
    kDisabledCategoriesFieldNumber = 1,
    kEnabledCategoriesFieldNumber = 2,
    kDisabledTagsFieldNumber = 3,
    kEnabledTagsFieldNumber = 4,
  };

  using FieldMetadata_DisabledCategories =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      TrackEventConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_DisabledCategories kDisabledCategories() { return {}; }
  void add_disabled_categories(const char* data, size_t size) {
    AppendBytes(FieldMetadata_DisabledCategories::kFieldId, data, size);
  }
  void add_disabled_categories(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_DisabledCategories::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_EnabledCategories =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      TrackEventConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_EnabledCategories kEnabledCategories() { return {}; }
  void add_enabled_categories(const char* data, size_t size) {
    AppendBytes(FieldMetadata_EnabledCategories::kFieldId, data, size);
  }
  void add_enabled_categories(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_EnabledCategories::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DisabledTags =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      TrackEventConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_DisabledTags kDisabledTags() { return {}; }
  void add_disabled_tags(const char* data, size_t size) {
    AppendBytes(FieldMetadata_DisabledTags::kFieldId, data, size);
  }
  void add_disabled_tags(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_DisabledTags::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_EnabledTags =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      TrackEventConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_EnabledTags kEnabledTags() { return {}; }
  void add_enabled_tags(const char* data, size_t size) {
    AppendBytes(FieldMetadata_EnabledTags::kFieldId, data, size);
  }
  void add_enabled_tags(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_EnabledTags::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
