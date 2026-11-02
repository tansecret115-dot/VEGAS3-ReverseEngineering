/* Module: vegas30.exe
   Function: FUN_00535040
   Address: 00535040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00535040(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uchar *_Source;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uchar local_104 [260];
  
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    *(undefined **)(param_2 + 0x44c) = &DAT_0064b15c;
  }
  puVar5 = *(uint **)(param_2 + 0x8bc);
  uVar2 = Mixer_GetNumMainBuses((ISFMixer *)0x0);
  if (puVar5 == (uint *)0x0) {
    return 0;
  }
  do {
    _mbscpy((uchar *)(puVar5 + 8),(uchar *)(param_2 + 0xc));
    uVar4 = *(uint *)(param_2 + 0x410);
    if (1 < uVar4) {
      if ((uVar2 < uVar4) && (*(short *)(param_2 + 0x416) == 1)) {
        uVar4 = *puVar5 >> 1;
      }
      else if (uVar2 == uVar4) {
        uVar4 = *puVar5;
      }
      else {
        uVar4 = 0;
      }
      Mixer_GetDeviceDisplayName((char *)local_104,0x104,1,uVar4,0);
      iVar3 = lstrlenA((LPCSTR)local_104);
      if (iVar3 == 0) {
        Mixer_GetDeviceName((char *)local_104,0x104,1,uVar4);
      }
      if (puVar5[0x4d] == 2) {
        uVar6 = 0x50ee;
LAB_0053511d:
        _Source = (uchar *)_SfGetString_8(DAT_00647204,uVar6);
        _mbscat(local_104,_Source);
      }
      else if (puVar5[0x4d] == 1) {
        uVar6 = 0x50ef;
        goto LAB_0053511d;
      }
      SfPrintF(puVar5 + 8,"%s%s %s%s",param_2 + 0x110,param_2 + 0x210,local_104,param_2 + 0x310);
    }
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      FUN_00533060(param_1,param_2,puVar5);
      piVar1 = (int *)(*(int *)(param_2 + 0x44c) + 0xc);
      *piVar1 = *piVar1 + 1;
    }
    if ((*(byte *)(param_2 + 4) & 2) != 0) {
      FUN_00533aa0(param_1,param_2,puVar5);
    }
    FUN_00533d60(param_1,puVar5,param_2);
    puVar5 = (uint *)puVar5[0x51];
    if (puVar5 == (uint *)0x0) {
      return 0;
    }
  } while( true );
}


