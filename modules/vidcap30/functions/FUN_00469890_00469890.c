/* Module: vidcap30.exe
   Function: FUN_00469890
   Address: 00469890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_00469890(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 param_5)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int iVar2;
  
  FUN_00583610(param_2,param_3,(LPCRITICAL_SECTION)(param_1 + 0x3a),param_4,param_5);
  param_1[0x38] = &PTR_LAB_00592c40;
  param_1[0x39] = &PTR_LAB_00592c20;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x5c] = 0x8c384072;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 10;
  param_1[0x5d] = 0x3fa1156f;
  *param_1 = &PTR_LAB_00592be4;
  param_1[3] = &PTR_LAB_00592b9c;
  param_1[4] = &PTR_LAB_00592b88;
  param_1[0x26] = &PTR_LAB_00592b64;
  param_1[0x38] = &PTR_LAB_00592b1c;
  param_1[0x39] = &PTR_LAB_00592afc;
  hMem = GlobalAlloc(0x40,0x140000);
  pvVar1 = GlobalLock(hMem);
  param_1[0x47] = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    *param_4 = -0x7ff8fff2;
  }
  iVar2 = _SfAudio_ResampleOpen_24(param_1 + 0x4b,0x11,48000,48000,2,2);
  if (iVar2 < 0) {
    *param_4 = iVar2;
  }
  return param_1;
}


