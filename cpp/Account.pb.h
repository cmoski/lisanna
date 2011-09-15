// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Account.proto

#ifndef PROTOBUF_Account_2eproto__INCLUDED
#define PROTOBUF_Account_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "AttributeSerializer.pb.h"
#include "Items.pb.h"
#include "OnlineService.pb.h"
#include "ItemCrafting.pb.h"
// @@protoc_insertion_point(includes)

namespace D3 {
namespace Account {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Account_2eproto();
void protobuf_AssignDesc_Account_2eproto();
void protobuf_ShutdownFile_Account_2eproto();

class BannerConfiguration;
class Digest;
class SavedDefinition;

enum Digest_Flags {
  Digest_Flags_HARDCORE_HERO_UNLOCKED = 1
};
bool Digest_Flags_IsValid(int value);
const Digest_Flags Digest_Flags_Flags_MIN = Digest_Flags_HARDCORE_HERO_UNLOCKED;
const Digest_Flags Digest_Flags_Flags_MAX = Digest_Flags_HARDCORE_HERO_UNLOCKED;
const int Digest_Flags_Flags_ARRAYSIZE = Digest_Flags_Flags_MAX + 1;

const ::google::protobuf::EnumDescriptor* Digest_Flags_descriptor();
inline const ::std::string& Digest_Flags_Name(Digest_Flags value) {
  return ::google::protobuf::internal::NameOfEnum(
    Digest_Flags_descriptor(), value);
}
inline bool Digest_Flags_Parse(
    const ::std::string& name, Digest_Flags* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Digest_Flags>(
    Digest_Flags_descriptor(), name, value);
}
// ===================================================================

class BannerConfiguration : public ::google::protobuf::Message {
 public:
  BannerConfiguration();
  virtual ~BannerConfiguration();
  
  BannerConfiguration(const BannerConfiguration& from);
  
  inline BannerConfiguration& operator=(const BannerConfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const BannerConfiguration& default_instance();
  
  void Swap(BannerConfiguration* other);
  
  // implements Message ----------------------------------------------
  
  BannerConfiguration* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BannerConfiguration& from);
  void MergeFrom(const BannerConfiguration& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 banner_index = 1;
  inline bool has_banner_index() const;
  inline void clear_banner_index();
  static const int kBannerIndexFieldNumber = 1;
  inline ::google::protobuf::uint32 banner_index() const;
  inline void set_banner_index(::google::protobuf::uint32 value);
  
  // required int32 sigil_main = 2;
  inline bool has_sigil_main() const;
  inline void clear_sigil_main();
  static const int kSigilMainFieldNumber = 2;
  inline ::google::protobuf::int32 sigil_main() const;
  inline void set_sigil_main(::google::protobuf::int32 value);
  
  // required int32 sigil_accent = 3;
  inline bool has_sigil_accent() const;
  inline void clear_sigil_accent();
  static const int kSigilAccentFieldNumber = 3;
  inline ::google::protobuf::int32 sigil_accent() const;
  inline void set_sigil_accent(::google::protobuf::int32 value);
  
  // required int32 pattern_color_index = 4;
  inline bool has_pattern_color_index() const;
  inline void clear_pattern_color_index();
  static const int kPatternColorIndexFieldNumber = 4;
  inline ::google::protobuf::int32 pattern_color_index() const;
  inline void set_pattern_color_index(::google::protobuf::int32 value);
  
  // required int32 background_color_index = 5;
  inline bool has_background_color_index() const;
  inline void clear_background_color_index();
  static const int kBackgroundColorIndexFieldNumber = 5;
  inline ::google::protobuf::int32 background_color_index() const;
  inline void set_background_color_index(::google::protobuf::int32 value);
  
  // required int32 sigil_color_index = 6;
  inline bool has_sigil_color_index() const;
  inline void clear_sigil_color_index();
  static const int kSigilColorIndexFieldNumber = 6;
  inline ::google::protobuf::int32 sigil_color_index() const;
  inline void set_sigil_color_index(::google::protobuf::int32 value);
  
  // required int32 placement_index = 7;
  inline bool has_placement_index() const;
  inline void clear_placement_index();
  static const int kPlacementIndexFieldNumber = 7;
  inline ::google::protobuf::int32 placement_index() const;
  inline void set_placement_index(::google::protobuf::int32 value);
  
  // required int32 pattern = 8;
  inline bool has_pattern() const;
  inline void clear_pattern();
  static const int kPatternFieldNumber = 8;
  inline ::google::protobuf::int32 pattern() const;
  inline void set_pattern(::google::protobuf::int32 value);
  
  // required bool use_sigil_variant = 9;
  inline bool has_use_sigil_variant() const;
  inline void clear_use_sigil_variant();
  static const int kUseSigilVariantFieldNumber = 9;
  inline bool use_sigil_variant() const;
  inline void set_use_sigil_variant(bool value);
  
  // @@protoc_insertion_point(class_scope:D3.Account.BannerConfiguration)
 private:
  inline void set_has_banner_index();
  inline void clear_has_banner_index();
  inline void set_has_sigil_main();
  inline void clear_has_sigil_main();
  inline void set_has_sigil_accent();
  inline void clear_has_sigil_accent();
  inline void set_has_pattern_color_index();
  inline void clear_has_pattern_color_index();
  inline void set_has_background_color_index();
  inline void clear_has_background_color_index();
  inline void set_has_sigil_color_index();
  inline void clear_has_sigil_color_index();
  inline void set_has_placement_index();
  inline void clear_has_placement_index();
  inline void set_has_pattern();
  inline void clear_has_pattern();
  inline void set_has_use_sigil_variant();
  inline void clear_has_use_sigil_variant();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint32 banner_index_;
  ::google::protobuf::int32 sigil_main_;
  ::google::protobuf::int32 sigil_accent_;
  ::google::protobuf::int32 pattern_color_index_;
  ::google::protobuf::int32 background_color_index_;
  ::google::protobuf::int32 sigil_color_index_;
  ::google::protobuf::int32 placement_index_;
  ::google::protobuf::int32 pattern_;
  bool use_sigil_variant_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];
  
  friend void  protobuf_AddDesc_Account_2eproto();
  friend void protobuf_AssignDesc_Account_2eproto();
  friend void protobuf_ShutdownFile_Account_2eproto();
  
  void InitAsDefaultInstance();
  static BannerConfiguration* default_instance_;
};
// -------------------------------------------------------------------

class Digest : public ::google::protobuf::Message {
 public:
  Digest();
  virtual ~Digest();
  
  Digest(const Digest& from);
  
  inline Digest& operator=(const Digest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Digest& default_instance();
  
  void Swap(Digest* other);
  
  // implements Message ----------------------------------------------
  
  Digest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Digest& from);
  void MergeFrom(const Digest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef Digest_Flags Flags;
  static const Flags HARDCORE_HERO_UNLOCKED = Digest_Flags_HARDCORE_HERO_UNLOCKED;
  static inline bool Flags_IsValid(int value) {
    return Digest_Flags_IsValid(value);
  }
  static const Flags Flags_MIN =
    Digest_Flags_Flags_MIN;
  static const Flags Flags_MAX =
    Digest_Flags_Flags_MAX;
  static const int Flags_ARRAYSIZE =
    Digest_Flags_Flags_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Flags_descriptor() {
    return Digest_Flags_descriptor();
  }
  static inline const ::std::string& Flags_Name(Flags value) {
    return Digest_Flags_Name(value);
  }
  static inline bool Flags_Parse(const ::std::string& name,
      Flags* value) {
    return Digest_Flags_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required uint32 version = 1;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 1;
  inline ::google::protobuf::uint32 version() const;
  inline void set_version(::google::protobuf::uint32 value);
  
  // required .D3.OnlineService.EntityId last_played_hero_id = 2;
  inline bool has_last_played_hero_id() const;
  inline void clear_last_played_hero_id();
  static const int kLastPlayedHeroIdFieldNumber = 2;
  inline const ::D3::OnlineService::EntityId& last_played_hero_id() const;
  inline ::D3::OnlineService::EntityId* mutable_last_played_hero_id();
  inline ::D3::OnlineService::EntityId* release_last_played_hero_id();
  
  // required .D3.Account.BannerConfiguration banner_configuration = 3;
  inline bool has_banner_configuration() const;
  inline void clear_banner_configuration();
  static const int kBannerConfigurationFieldNumber = 3;
  inline const ::D3::Account::BannerConfiguration& banner_configuration() const;
  inline ::D3::Account::BannerConfiguration* mutable_banner_configuration();
  inline ::D3::Account::BannerConfiguration* release_banner_configuration();
  
  // required uint32 flags = 4;
  inline bool has_flags() const;
  inline void clear_flags();
  static const int kFlagsFieldNumber = 4;
  inline ::google::protobuf::uint32 flags() const;
  inline void set_flags(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:D3.Account.Digest)
 private:
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_last_played_hero_id();
  inline void clear_has_last_played_hero_id();
  inline void set_has_banner_configuration();
  inline void clear_has_banner_configuration();
  inline void set_has_flags();
  inline void clear_has_flags();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::D3::OnlineService::EntityId* last_played_hero_id_;
  ::google::protobuf::uint32 version_;
  ::google::protobuf::uint32 flags_;
  ::D3::Account::BannerConfiguration* banner_configuration_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_Account_2eproto();
  friend void protobuf_AssignDesc_Account_2eproto();
  friend void protobuf_ShutdownFile_Account_2eproto();
  
  void InitAsDefaultInstance();
  static Digest* default_instance_;
};
// -------------------------------------------------------------------

class SavedDefinition : public ::google::protobuf::Message {
 public:
  SavedDefinition();
  virtual ~SavedDefinition();
  
  SavedDefinition(const SavedDefinition& from);
  
  inline SavedDefinition& operator=(const SavedDefinition& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedDefinition& default_instance();
  
  void Swap(SavedDefinition* other);
  
  // implements Message ----------------------------------------------
  
  SavedDefinition* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedDefinition& from);
  void MergeFrom(const SavedDefinition& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 version = 1;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 1;
  inline ::google::protobuf::uint32 version() const;
  inline void set_version(::google::protobuf::uint32 value);
  
  // optional .D3.Account.Digest digest = 2;
  inline bool has_digest() const;
  inline void clear_digest();
  static const int kDigestFieldNumber = 2;
  inline const ::D3::Account::Digest& digest() const;
  inline ::D3::Account::Digest* mutable_digest();
  inline ::D3::Account::Digest* release_digest();
  
  // required .D3.AttributeSerializer.SavedAttributes saved_attributes = 3;
  inline bool has_saved_attributes() const;
  inline void clear_saved_attributes();
  static const int kSavedAttributesFieldNumber = 3;
  inline const ::D3::AttributeSerializer::SavedAttributes& saved_attributes() const;
  inline ::D3::AttributeSerializer::SavedAttributes* mutable_saved_attributes();
  inline ::D3::AttributeSerializer::SavedAttributes* release_saved_attributes();
  
  // optional .D3.Items.ItemList normal_shared_saved_items = 4;
  inline bool has_normal_shared_saved_items() const;
  inline void clear_normal_shared_saved_items();
  static const int kNormalSharedSavedItemsFieldNumber = 4;
  inline const ::D3::Items::ItemList& normal_shared_saved_items() const;
  inline ::D3::Items::ItemList* mutable_normal_shared_saved_items();
  inline ::D3::Items::ItemList* release_normal_shared_saved_items();
  
  // optional .D3.Items.ItemList hardcore_shared_saved_items = 5;
  inline bool has_hardcore_shared_saved_items() const;
  inline void clear_hardcore_shared_saved_items();
  static const int kHardcoreSharedSavedItemsFieldNumber = 5;
  inline const ::D3::Items::ItemList& hardcore_shared_saved_items() const;
  inline ::D3::Items::ItemList* mutable_hardcore_shared_saved_items();
  inline ::D3::Items::ItemList* release_hardcore_shared_saved_items();
  
  // optional .D3.ItemCrafting.CrafterSavedData crafter_saved_data = 6;
  inline bool has_crafter_saved_data() const;
  inline void clear_crafter_saved_data();
  static const int kCrafterSavedDataFieldNumber = 6;
  inline const ::D3::ItemCrafting::CrafterSavedData& crafter_saved_data() const;
  inline ::D3::ItemCrafting::CrafterSavedData* mutable_crafter_saved_data();
  inline ::D3::ItemCrafting::CrafterSavedData* release_crafter_saved_data();
  
  // repeated sfixed32 seen_tutorials = 7;
  inline int seen_tutorials_size() const;
  inline void clear_seen_tutorials();
  static const int kSeenTutorialsFieldNumber = 7;
  inline ::google::protobuf::int32 seen_tutorials(int index) const;
  inline void set_seen_tutorials(int index, ::google::protobuf::int32 value);
  inline void add_seen_tutorials(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      seen_tutorials() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_seen_tutorials();
  
  // @@protoc_insertion_point(class_scope:D3.Account.SavedDefinition)
 private:
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_digest();
  inline void clear_has_digest();
  inline void set_has_saved_attributes();
  inline void clear_has_saved_attributes();
  inline void set_has_normal_shared_saved_items();
  inline void clear_has_normal_shared_saved_items();
  inline void set_has_hardcore_shared_saved_items();
  inline void clear_has_hardcore_shared_saved_items();
  inline void set_has_crafter_saved_data();
  inline void clear_has_crafter_saved_data();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::D3::Account::Digest* digest_;
  ::D3::AttributeSerializer::SavedAttributes* saved_attributes_;
  ::D3::Items::ItemList* normal_shared_saved_items_;
  ::D3::Items::ItemList* hardcore_shared_saved_items_;
  ::D3::ItemCrafting::CrafterSavedData* crafter_saved_data_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > seen_tutorials_;
  ::google::protobuf::uint32 version_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  friend void  protobuf_AddDesc_Account_2eproto();
  friend void protobuf_AssignDesc_Account_2eproto();
  friend void protobuf_ShutdownFile_Account_2eproto();
  
  void InitAsDefaultInstance();
  static SavedDefinition* default_instance_;
};
// ===================================================================


// ===================================================================

// BannerConfiguration

// required uint32 banner_index = 1;
inline bool BannerConfiguration::has_banner_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BannerConfiguration::set_has_banner_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BannerConfiguration::clear_has_banner_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BannerConfiguration::clear_banner_index() {
  banner_index_ = 0u;
  clear_has_banner_index();
}
inline ::google::protobuf::uint32 BannerConfiguration::banner_index() const {
  return banner_index_;
}
inline void BannerConfiguration::set_banner_index(::google::protobuf::uint32 value) {
  set_has_banner_index();
  banner_index_ = value;
}

// required int32 sigil_main = 2;
inline bool BannerConfiguration::has_sigil_main() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BannerConfiguration::set_has_sigil_main() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BannerConfiguration::clear_has_sigil_main() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BannerConfiguration::clear_sigil_main() {
  sigil_main_ = 0;
  clear_has_sigil_main();
}
inline ::google::protobuf::int32 BannerConfiguration::sigil_main() const {
  return sigil_main_;
}
inline void BannerConfiguration::set_sigil_main(::google::protobuf::int32 value) {
  set_has_sigil_main();
  sigil_main_ = value;
}

// required int32 sigil_accent = 3;
inline bool BannerConfiguration::has_sigil_accent() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BannerConfiguration::set_has_sigil_accent() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BannerConfiguration::clear_has_sigil_accent() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BannerConfiguration::clear_sigil_accent() {
  sigil_accent_ = 0;
  clear_has_sigil_accent();
}
inline ::google::protobuf::int32 BannerConfiguration::sigil_accent() const {
  return sigil_accent_;
}
inline void BannerConfiguration::set_sigil_accent(::google::protobuf::int32 value) {
  set_has_sigil_accent();
  sigil_accent_ = value;
}

// required int32 pattern_color_index = 4;
inline bool BannerConfiguration::has_pattern_color_index() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BannerConfiguration::set_has_pattern_color_index() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BannerConfiguration::clear_has_pattern_color_index() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BannerConfiguration::clear_pattern_color_index() {
  pattern_color_index_ = 0;
  clear_has_pattern_color_index();
}
inline ::google::protobuf::int32 BannerConfiguration::pattern_color_index() const {
  return pattern_color_index_;
}
inline void BannerConfiguration::set_pattern_color_index(::google::protobuf::int32 value) {
  set_has_pattern_color_index();
  pattern_color_index_ = value;
}

// required int32 background_color_index = 5;
inline bool BannerConfiguration::has_background_color_index() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BannerConfiguration::set_has_background_color_index() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BannerConfiguration::clear_has_background_color_index() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BannerConfiguration::clear_background_color_index() {
  background_color_index_ = 0;
  clear_has_background_color_index();
}
inline ::google::protobuf::int32 BannerConfiguration::background_color_index() const {
  return background_color_index_;
}
inline void BannerConfiguration::set_background_color_index(::google::protobuf::int32 value) {
  set_has_background_color_index();
  background_color_index_ = value;
}

// required int32 sigil_color_index = 6;
inline bool BannerConfiguration::has_sigil_color_index() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void BannerConfiguration::set_has_sigil_color_index() {
  _has_bits_[0] |= 0x00000020u;
}
inline void BannerConfiguration::clear_has_sigil_color_index() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void BannerConfiguration::clear_sigil_color_index() {
  sigil_color_index_ = 0;
  clear_has_sigil_color_index();
}
inline ::google::protobuf::int32 BannerConfiguration::sigil_color_index() const {
  return sigil_color_index_;
}
inline void BannerConfiguration::set_sigil_color_index(::google::protobuf::int32 value) {
  set_has_sigil_color_index();
  sigil_color_index_ = value;
}

// required int32 placement_index = 7;
inline bool BannerConfiguration::has_placement_index() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void BannerConfiguration::set_has_placement_index() {
  _has_bits_[0] |= 0x00000040u;
}
inline void BannerConfiguration::clear_has_placement_index() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void BannerConfiguration::clear_placement_index() {
  placement_index_ = 0;
  clear_has_placement_index();
}
inline ::google::protobuf::int32 BannerConfiguration::placement_index() const {
  return placement_index_;
}
inline void BannerConfiguration::set_placement_index(::google::protobuf::int32 value) {
  set_has_placement_index();
  placement_index_ = value;
}

// required int32 pattern = 8;
inline bool BannerConfiguration::has_pattern() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void BannerConfiguration::set_has_pattern() {
  _has_bits_[0] |= 0x00000080u;
}
inline void BannerConfiguration::clear_has_pattern() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void BannerConfiguration::clear_pattern() {
  pattern_ = 0;
  clear_has_pattern();
}
inline ::google::protobuf::int32 BannerConfiguration::pattern() const {
  return pattern_;
}
inline void BannerConfiguration::set_pattern(::google::protobuf::int32 value) {
  set_has_pattern();
  pattern_ = value;
}

// required bool use_sigil_variant = 9;
inline bool BannerConfiguration::has_use_sigil_variant() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void BannerConfiguration::set_has_use_sigil_variant() {
  _has_bits_[0] |= 0x00000100u;
}
inline void BannerConfiguration::clear_has_use_sigil_variant() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void BannerConfiguration::clear_use_sigil_variant() {
  use_sigil_variant_ = false;
  clear_has_use_sigil_variant();
}
inline bool BannerConfiguration::use_sigil_variant() const {
  return use_sigil_variant_;
}
inline void BannerConfiguration::set_use_sigil_variant(bool value) {
  set_has_use_sigil_variant();
  use_sigil_variant_ = value;
}

// -------------------------------------------------------------------

// Digest

// required uint32 version = 1;
inline bool Digest::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Digest::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Digest::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Digest::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 Digest::version() const {
  return version_;
}
inline void Digest::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
}

// required .D3.OnlineService.EntityId last_played_hero_id = 2;
inline bool Digest::has_last_played_hero_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Digest::set_has_last_played_hero_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Digest::clear_has_last_played_hero_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Digest::clear_last_played_hero_id() {
  if (last_played_hero_id_ != NULL) last_played_hero_id_->::D3::OnlineService::EntityId::Clear();
  clear_has_last_played_hero_id();
}
inline const ::D3::OnlineService::EntityId& Digest::last_played_hero_id() const {
  return last_played_hero_id_ != NULL ? *last_played_hero_id_ : *default_instance_->last_played_hero_id_;
}
inline ::D3::OnlineService::EntityId* Digest::mutable_last_played_hero_id() {
  set_has_last_played_hero_id();
  if (last_played_hero_id_ == NULL) last_played_hero_id_ = new ::D3::OnlineService::EntityId;
  return last_played_hero_id_;
}
inline ::D3::OnlineService::EntityId* Digest::release_last_played_hero_id() {
  clear_has_last_played_hero_id();
  ::D3::OnlineService::EntityId* temp = last_played_hero_id_;
  last_played_hero_id_ = NULL;
  return temp;
}

// required .D3.Account.BannerConfiguration banner_configuration = 3;
inline bool Digest::has_banner_configuration() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Digest::set_has_banner_configuration() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Digest::clear_has_banner_configuration() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Digest::clear_banner_configuration() {
  if (banner_configuration_ != NULL) banner_configuration_->::D3::Account::BannerConfiguration::Clear();
  clear_has_banner_configuration();
}
inline const ::D3::Account::BannerConfiguration& Digest::banner_configuration() const {
  return banner_configuration_ != NULL ? *banner_configuration_ : *default_instance_->banner_configuration_;
}
inline ::D3::Account::BannerConfiguration* Digest::mutable_banner_configuration() {
  set_has_banner_configuration();
  if (banner_configuration_ == NULL) banner_configuration_ = new ::D3::Account::BannerConfiguration;
  return banner_configuration_;
}
inline ::D3::Account::BannerConfiguration* Digest::release_banner_configuration() {
  clear_has_banner_configuration();
  ::D3::Account::BannerConfiguration* temp = banner_configuration_;
  banner_configuration_ = NULL;
  return temp;
}

// required uint32 flags = 4;
inline bool Digest::has_flags() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Digest::set_has_flags() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Digest::clear_has_flags() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Digest::clear_flags() {
  flags_ = 0u;
  clear_has_flags();
}
inline ::google::protobuf::uint32 Digest::flags() const {
  return flags_;
}
inline void Digest::set_flags(::google::protobuf::uint32 value) {
  set_has_flags();
  flags_ = value;
}

// -------------------------------------------------------------------

// SavedDefinition

// required uint32 version = 1;
inline bool SavedDefinition::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SavedDefinition::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SavedDefinition::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SavedDefinition::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 SavedDefinition::version() const {
  return version_;
}
inline void SavedDefinition::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
}

// optional .D3.Account.Digest digest = 2;
inline bool SavedDefinition::has_digest() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SavedDefinition::set_has_digest() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SavedDefinition::clear_has_digest() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SavedDefinition::clear_digest() {
  if (digest_ != NULL) digest_->::D3::Account::Digest::Clear();
  clear_has_digest();
}
inline const ::D3::Account::Digest& SavedDefinition::digest() const {
  return digest_ != NULL ? *digest_ : *default_instance_->digest_;
}
inline ::D3::Account::Digest* SavedDefinition::mutable_digest() {
  set_has_digest();
  if (digest_ == NULL) digest_ = new ::D3::Account::Digest;
  return digest_;
}
inline ::D3::Account::Digest* SavedDefinition::release_digest() {
  clear_has_digest();
  ::D3::Account::Digest* temp = digest_;
  digest_ = NULL;
  return temp;
}

// required .D3.AttributeSerializer.SavedAttributes saved_attributes = 3;
inline bool SavedDefinition::has_saved_attributes() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SavedDefinition::set_has_saved_attributes() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SavedDefinition::clear_has_saved_attributes() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SavedDefinition::clear_saved_attributes() {
  if (saved_attributes_ != NULL) saved_attributes_->::D3::AttributeSerializer::SavedAttributes::Clear();
  clear_has_saved_attributes();
}
inline const ::D3::AttributeSerializer::SavedAttributes& SavedDefinition::saved_attributes() const {
  return saved_attributes_ != NULL ? *saved_attributes_ : *default_instance_->saved_attributes_;
}
inline ::D3::AttributeSerializer::SavedAttributes* SavedDefinition::mutable_saved_attributes() {
  set_has_saved_attributes();
  if (saved_attributes_ == NULL) saved_attributes_ = new ::D3::AttributeSerializer::SavedAttributes;
  return saved_attributes_;
}
inline ::D3::AttributeSerializer::SavedAttributes* SavedDefinition::release_saved_attributes() {
  clear_has_saved_attributes();
  ::D3::AttributeSerializer::SavedAttributes* temp = saved_attributes_;
  saved_attributes_ = NULL;
  return temp;
}

// optional .D3.Items.ItemList normal_shared_saved_items = 4;
inline bool SavedDefinition::has_normal_shared_saved_items() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SavedDefinition::set_has_normal_shared_saved_items() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SavedDefinition::clear_has_normal_shared_saved_items() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SavedDefinition::clear_normal_shared_saved_items() {
  if (normal_shared_saved_items_ != NULL) normal_shared_saved_items_->::D3::Items::ItemList::Clear();
  clear_has_normal_shared_saved_items();
}
inline const ::D3::Items::ItemList& SavedDefinition::normal_shared_saved_items() const {
  return normal_shared_saved_items_ != NULL ? *normal_shared_saved_items_ : *default_instance_->normal_shared_saved_items_;
}
inline ::D3::Items::ItemList* SavedDefinition::mutable_normal_shared_saved_items() {
  set_has_normal_shared_saved_items();
  if (normal_shared_saved_items_ == NULL) normal_shared_saved_items_ = new ::D3::Items::ItemList;
  return normal_shared_saved_items_;
}
inline ::D3::Items::ItemList* SavedDefinition::release_normal_shared_saved_items() {
  clear_has_normal_shared_saved_items();
  ::D3::Items::ItemList* temp = normal_shared_saved_items_;
  normal_shared_saved_items_ = NULL;
  return temp;
}

// optional .D3.Items.ItemList hardcore_shared_saved_items = 5;
inline bool SavedDefinition::has_hardcore_shared_saved_items() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SavedDefinition::set_has_hardcore_shared_saved_items() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SavedDefinition::clear_has_hardcore_shared_saved_items() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SavedDefinition::clear_hardcore_shared_saved_items() {
  if (hardcore_shared_saved_items_ != NULL) hardcore_shared_saved_items_->::D3::Items::ItemList::Clear();
  clear_has_hardcore_shared_saved_items();
}
inline const ::D3::Items::ItemList& SavedDefinition::hardcore_shared_saved_items() const {
  return hardcore_shared_saved_items_ != NULL ? *hardcore_shared_saved_items_ : *default_instance_->hardcore_shared_saved_items_;
}
inline ::D3::Items::ItemList* SavedDefinition::mutable_hardcore_shared_saved_items() {
  set_has_hardcore_shared_saved_items();
  if (hardcore_shared_saved_items_ == NULL) hardcore_shared_saved_items_ = new ::D3::Items::ItemList;
  return hardcore_shared_saved_items_;
}
inline ::D3::Items::ItemList* SavedDefinition::release_hardcore_shared_saved_items() {
  clear_has_hardcore_shared_saved_items();
  ::D3::Items::ItemList* temp = hardcore_shared_saved_items_;
  hardcore_shared_saved_items_ = NULL;
  return temp;
}

// optional .D3.ItemCrafting.CrafterSavedData crafter_saved_data = 6;
inline bool SavedDefinition::has_crafter_saved_data() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SavedDefinition::set_has_crafter_saved_data() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SavedDefinition::clear_has_crafter_saved_data() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SavedDefinition::clear_crafter_saved_data() {
  if (crafter_saved_data_ != NULL) crafter_saved_data_->::D3::ItemCrafting::CrafterSavedData::Clear();
  clear_has_crafter_saved_data();
}
inline const ::D3::ItemCrafting::CrafterSavedData& SavedDefinition::crafter_saved_data() const {
  return crafter_saved_data_ != NULL ? *crafter_saved_data_ : *default_instance_->crafter_saved_data_;
}
inline ::D3::ItemCrafting::CrafterSavedData* SavedDefinition::mutable_crafter_saved_data() {
  set_has_crafter_saved_data();
  if (crafter_saved_data_ == NULL) crafter_saved_data_ = new ::D3::ItemCrafting::CrafterSavedData;
  return crafter_saved_data_;
}
inline ::D3::ItemCrafting::CrafterSavedData* SavedDefinition::release_crafter_saved_data() {
  clear_has_crafter_saved_data();
  ::D3::ItemCrafting::CrafterSavedData* temp = crafter_saved_data_;
  crafter_saved_data_ = NULL;
  return temp;
}

// repeated sfixed32 seen_tutorials = 7;
inline int SavedDefinition::seen_tutorials_size() const {
  return seen_tutorials_.size();
}
inline void SavedDefinition::clear_seen_tutorials() {
  seen_tutorials_.Clear();
}
inline ::google::protobuf::int32 SavedDefinition::seen_tutorials(int index) const {
  return seen_tutorials_.Get(index);
}
inline void SavedDefinition::set_seen_tutorials(int index, ::google::protobuf::int32 value) {
  seen_tutorials_.Set(index, value);
}
inline void SavedDefinition::add_seen_tutorials(::google::protobuf::int32 value) {
  seen_tutorials_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
SavedDefinition::seen_tutorials() const {
  return seen_tutorials_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
SavedDefinition::mutable_seen_tutorials() {
  return &seen_tutorials_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Account
}  // namespace D3

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::D3::Account::Digest_Flags>() {
  return ::D3::Account::Digest_Flags_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Account_2eproto__INCLUDED
