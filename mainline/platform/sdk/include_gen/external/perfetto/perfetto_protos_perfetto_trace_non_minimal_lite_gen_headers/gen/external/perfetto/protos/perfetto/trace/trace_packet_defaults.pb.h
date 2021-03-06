// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/trace_packet_defaults.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "protos/perfetto/trace/profiling/profile_packet.pb.h"
#include "protos/perfetto/trace/track_event/track_event.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class TracePacketDefaults;
class TracePacketDefaultsDefaultTypeInternal;
extern TracePacketDefaultsDefaultTypeInternal _TracePacketDefaults_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::TracePacketDefaults* Arena::CreateMaybeMessage<::perfetto::protos::TracePacketDefaults>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class TracePacketDefaults :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TracePacketDefaults) */ {
 public:
  TracePacketDefaults();
  virtual ~TracePacketDefaults();

  TracePacketDefaults(const TracePacketDefaults& from);
  TracePacketDefaults(TracePacketDefaults&& from) noexcept
    : TracePacketDefaults() {
    *this = ::std::move(from);
  }

  inline TracePacketDefaults& operator=(const TracePacketDefaults& from) {
    CopyFrom(from);
    return *this;
  }
  inline TracePacketDefaults& operator=(TracePacketDefaults&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const TracePacketDefaults& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TracePacketDefaults* internal_default_instance() {
    return reinterpret_cast<const TracePacketDefaults*>(
               &_TracePacketDefaults_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TracePacketDefaults& a, TracePacketDefaults& b) {
    a.Swap(&b);
  }
  inline void Swap(TracePacketDefaults* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TracePacketDefaults* New() const final {
    return CreateMaybeMessage<TracePacketDefaults>(nullptr);
  }

  TracePacketDefaults* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TracePacketDefaults>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const TracePacketDefaults& from);
  void MergeFrom(const TracePacketDefaults& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TracePacketDefaults* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.TracePacketDefaults";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTrackEventDefaultsFieldNumber = 11,
    kPerfSampleDefaultsFieldNumber = 12,
    kTimestampClockIdFieldNumber = 58,
  };
  // optional .perfetto.protos.TrackEventDefaults track_event_defaults = 11;
  bool has_track_event_defaults() const;
  void clear_track_event_defaults();
  const ::perfetto::protos::TrackEventDefaults& track_event_defaults() const;
  ::perfetto::protos::TrackEventDefaults* release_track_event_defaults();
  ::perfetto::protos::TrackEventDefaults* mutable_track_event_defaults();
  void set_allocated_track_event_defaults(::perfetto::protos::TrackEventDefaults* track_event_defaults);

  // optional .perfetto.protos.PerfSampleDefaults perf_sample_defaults = 12;
  bool has_perf_sample_defaults() const;
  void clear_perf_sample_defaults();
  const ::perfetto::protos::PerfSampleDefaults& perf_sample_defaults() const;
  ::perfetto::protos::PerfSampleDefaults* release_perf_sample_defaults();
  ::perfetto::protos::PerfSampleDefaults* mutable_perf_sample_defaults();
  void set_allocated_perf_sample_defaults(::perfetto::protos::PerfSampleDefaults* perf_sample_defaults);

  // optional uint32 timestamp_clock_id = 58;
  bool has_timestamp_clock_id() const;
  void clear_timestamp_clock_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 timestamp_clock_id() const;
  void set_timestamp_clock_id(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.TracePacketDefaults)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::perfetto::protos::TrackEventDefaults* track_event_defaults_;
  ::perfetto::protos::PerfSampleDefaults* perf_sample_defaults_;
  ::PROTOBUF_NAMESPACE_ID::uint32 timestamp_clock_id_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TracePacketDefaults

// optional uint32 timestamp_clock_id = 58;
inline bool TracePacketDefaults::has_timestamp_clock_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TracePacketDefaults::clear_timestamp_clock_id() {
  timestamp_clock_id_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TracePacketDefaults::timestamp_clock_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TracePacketDefaults.timestamp_clock_id)
  return timestamp_clock_id_;
}
inline void TracePacketDefaults::set_timestamp_clock_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  timestamp_clock_id_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TracePacketDefaults.timestamp_clock_id)
}

// optional .perfetto.protos.TrackEventDefaults track_event_defaults = 11;
inline bool TracePacketDefaults::has_track_event_defaults() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::perfetto::protos::TrackEventDefaults& TracePacketDefaults::track_event_defaults() const {
  const ::perfetto::protos::TrackEventDefaults* p = track_event_defaults_;
  // @@protoc_insertion_point(field_get:perfetto.protos.TracePacketDefaults.track_event_defaults)
  return p != nullptr ? *p : *reinterpret_cast<const ::perfetto::protos::TrackEventDefaults*>(
      &::perfetto::protos::_TrackEventDefaults_default_instance_);
}
inline ::perfetto::protos::TrackEventDefaults* TracePacketDefaults::release_track_event_defaults() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TracePacketDefaults.track_event_defaults)
  _has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::TrackEventDefaults* temp = track_event_defaults_;
  track_event_defaults_ = nullptr;
  return temp;
}
inline ::perfetto::protos::TrackEventDefaults* TracePacketDefaults::mutable_track_event_defaults() {
  _has_bits_[0] |= 0x00000001u;
  if (track_event_defaults_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::TrackEventDefaults>(GetArenaNoVirtual());
    track_event_defaults_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TracePacketDefaults.track_event_defaults)
  return track_event_defaults_;
}
inline void TracePacketDefaults::set_allocated_track_event_defaults(::perfetto::protos::TrackEventDefaults* track_event_defaults) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(track_event_defaults_);
  }
  if (track_event_defaults) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      track_event_defaults = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, track_event_defaults, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  track_event_defaults_ = track_event_defaults;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TracePacketDefaults.track_event_defaults)
}

// optional .perfetto.protos.PerfSampleDefaults perf_sample_defaults = 12;
inline bool TracePacketDefaults::has_perf_sample_defaults() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::perfetto::protos::PerfSampleDefaults& TracePacketDefaults::perf_sample_defaults() const {
  const ::perfetto::protos::PerfSampleDefaults* p = perf_sample_defaults_;
  // @@protoc_insertion_point(field_get:perfetto.protos.TracePacketDefaults.perf_sample_defaults)
  return p != nullptr ? *p : *reinterpret_cast<const ::perfetto::protos::PerfSampleDefaults*>(
      &::perfetto::protos::_PerfSampleDefaults_default_instance_);
}
inline ::perfetto::protos::PerfSampleDefaults* TracePacketDefaults::release_perf_sample_defaults() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TracePacketDefaults.perf_sample_defaults)
  _has_bits_[0] &= ~0x00000002u;
  ::perfetto::protos::PerfSampleDefaults* temp = perf_sample_defaults_;
  perf_sample_defaults_ = nullptr;
  return temp;
}
inline ::perfetto::protos::PerfSampleDefaults* TracePacketDefaults::mutable_perf_sample_defaults() {
  _has_bits_[0] |= 0x00000002u;
  if (perf_sample_defaults_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::PerfSampleDefaults>(GetArenaNoVirtual());
    perf_sample_defaults_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TracePacketDefaults.perf_sample_defaults)
  return perf_sample_defaults_;
}
inline void TracePacketDefaults::set_allocated_perf_sample_defaults(::perfetto::protos::PerfSampleDefaults* perf_sample_defaults) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(perf_sample_defaults_);
  }
  if (perf_sample_defaults) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      perf_sample_defaults = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, perf_sample_defaults, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  perf_sample_defaults_ = perf_sample_defaults;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TracePacketDefaults.perf_sample_defaults)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrace_5fpacket_5fdefaults_2eproto
