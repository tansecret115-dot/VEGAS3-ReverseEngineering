/* Module: vegas30.exe
   Function: FUN_004ee190
   Address: 004ee190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ee190(HWND__ *param_1,int *param_2)

{
  uchar *_Source;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 *local_240;
  uchar *local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  uchar local_208 [260];
  undefined1 local_104 [260];
  
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    FUN_004f0620(*(undefined4 *)param_2[2],local_104);
    local_230 = 0xbe;
    local_244 = 1;
    local_248 = 0;
    local_238 = 0;
    local_234 = DAT_0064b510;
    _Source = (uchar *)_SfGetString_8(DAT_00647204,0x14bd);
    _mbscpy(local_208,_Source);
    local_23c = local_208;
    local_240 = local_104;
    SfFileProperties(param_1,(tPSFFILEPROPINFO *)&local_248,0x40);
  }
  return;
}


