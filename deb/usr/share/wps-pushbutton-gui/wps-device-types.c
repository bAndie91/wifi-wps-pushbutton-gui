
/* This snippet is from Wireshark codebase, file:
   epan/dissectors/packet-wps.c
*/

static const value_string eapwps_tlv_primary_device_type_category[] = {
  { 0x01, "Computer" },
  { 0x02, "Input Device" },
  { 0x03, "Printers, Scanners, Faxes and Copiers" },
  { 0x04, "Camera" },
  { 0x05, "Storage" },
  { 0x06, "Network Infrastructure" },
  { 0x07, "Displays" },
  { 0x08, "Multimedia Devices" },
  { 0x09, "Gaming Devices" },
  { 0x0A, "Telephone" },
  { 0x0B, "Audio Devices" },
  { 0, NULL }
};

static const value_string eapwps_tlv_computer_subcategory[] = {
  { 0x01, "PC" },
  { 0x02, "Server" },
  { 0x03, "Media Center" },
  { 0x04, "Ultra-mobile PC" },
  { 0x05, "Notebook" },
  { 0x06, "Desktop" },
  { 0x07, "MID (Mobile Internet Device)" },
  { 0x08, "Netbook" },
  { 0, NULL }
};

static const value_string eapwps_tlv_input_device_subcategory[] = {
  { 0x01, "Keyboard" },
  { 0x02, "Mouse" },
  { 0x03, "Joystick" },
  { 0x04, "Trackball" },
  { 0x05, "Gaming controller" },
  { 0x06, "Remote" },
  { 0x07, "Touchscreen" },
  { 0x08, "Biometric reader" },
  { 0x09, "Barcode reader" },
  { 0, NULL }
};

static const value_string eapwps_tlv_printers_scanners_faxes_copiers_subcategory[] = {
  { 0x01, "Printer or Print Server" },
  { 0x02, "Scanner" },
  { 0x03, "Fax" },
  { 0x04, "Copier" },
  { 0x05, "All-in-one (Printer, Scanner, Fax, Copier)" },
  { 0, NULL }
};

static const value_string eapwps_tlv_camera_subcategory[] = {
  { 0x01, "Digital Still Camera" },
  { 0x02, "Video Camera" },
  { 0x03, "Web Camera" },
  { 0x04, "Security Camera" },
  { 0, NULL }
};

static const value_string eapwps_tlv_storage_subcategory[] = {
  { 0x01, "NAS" },
  { 0, NULL }
};

static const value_string eapwps_tlv_network_infrastructure_subcategory[] = {
  { 0x01, "AP" },
  { 0x02, "Router" },
  { 0x03, "Switch" },
  { 0x04, "Gateway" },
  { 0x05, "Bridge" },
  { 0, NULL }
};

static const value_string eapwps_tlv_displays_subcategory[] = {
  { 0x01, "Television" },
  { 0x02, "Electronic Picture Frame" },
  { 0x03, "Projector" },
  { 0x04, "Monitor" },
  { 0, NULL }
};

static const value_string eapwps_tlv_multimedia_devices_subcategory[] = {
  { 0x01, "DAR" },
  { 0x02, "PVR" },
  { 0x03, "MCX" },
  { 0x04, "Set-top box" },
  { 0x05, "Media Server/Media Adapter/Media Extender" },
  { 0x06, "Portable Video Player" },
  { 0, NULL }
};

static const value_string eapwps_tlv_gaming_devices_subcategory[] = {
  { 0x01, "Xbox" },
  { 0x02, "Xbox360" },
  { 0x03, "Playstation" },
  { 0x04, "Game Console/Game Console Adapter" },
  { 0x05, "Portable Gaming Device" },
  { 0, NULL }
};

static const value_string eapwps_tlv_telephone_subcategory[] = {
  { 0x01, "Windows Mobile" },
  { 0x02, "Phone - single mode" },
  { 0x03, "Phone - dual mode" },
  { 0x04, "Smartphone - single mode" },
  { 0x05, "Smartphone - dual mode" },
  { 0, NULL }
};

static const value_string eapwps_tlv_audio_devices_subcategory[] = {
  { 0x01, "Audio tuner/receiver" },
  { 0x02, "Speakers" },
  { 0x03, "Portable Music Player (PMP)" },
  { 0x04, "Headset (headphones + microphone)" },
  { 0x05, "Headphones" },
  { 0x06, "Microphone" },
  { 0x07, "Home Theater Systems" },
  { 0, NULL }
};
