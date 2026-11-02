/* Module: vegas30.exe
   Function: FUN_004d2ea0
   Address: 004d2ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d2ea0(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long local_c;
  long local_8 [2];
  
  iVar2 = param_2;
  puVar1 = *(uint **)(*(int *)(param_2 + 0x69c) + 0x54);
  if ((puVar1[0x46] != 0) && ((*(byte *)(param_2 + 0x10) & 0x80) != 0)) {
    Mixer_GetOutputDeviceRange(*(ulong *)(param_2 + 0x3c),&local_c,&param_2);
    lVar3 = Mixer_GetOutputDeviceGain(*(ulong *)(iVar2 + 0x3c),local_8);
    if (lVar3 < 0) {
      *puVar1 = *puVar1 & 0xffffbfff | 0x8000;
      _FaderInst_SetScrollProc_12(puVar1[0x46],&DAT_004cf0c0,param_1);
    }
    else if ((puVar1 != (uint *)0x0) && (puVar1[0x46] != 0)) {
      *puVar1 = *puVar1 & 0xffff3fff;
      _FaderInst_Init_28(puVar1[0x46],0x1200,puVar1 + 0x35,*(undefined4 *)(param_1 + 4),param_3,
                         &LAB_004ceea0,param_1);
      _FaderInst_SetScrollProc_12(puVar1[0x46],&LAB_004cefb0,param_1);
      _FaderInst_Message_16(puVar1[0x46],0x60e,0,param_2);
      _FaderInst_Message_16(puVar1[0x46],0x60f,0,local_c);
      _FaderInst_Message_16(puVar1[0x46],0x610,1,local_8[0]);
      return;
    }
  }
  return;
}


