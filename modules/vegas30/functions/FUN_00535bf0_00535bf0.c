/* Module: vegas30.exe
   Function: FUN_00535bf0
   Address: 00535bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00535bf0(void)

{
  int iVar1;
  uchar *_Source;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_stack_00000124;
  uint in_stack_00000530;
  int in_stack_00001790;
  int in_stack_00001794;
  
  FUN_0060ac30();
  iVar1 = FUN_005fb200();
  if (-1 < iVar1) {
    if ((in_stack_00001794 != 0) && (iVar1 = FUN_005b8900(), iVar1 == 0)) {
      return 0;
    }
    puVar3 = (undefined4 *)&stack0x00000d5c;
    for (iVar1 = 0x28c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    iVar1 = FUN_0052dfc0();
    if ((-1 < iVar1) && (iVar1 != 0x4e001)) {
      iVar1 = FUN_005380d0();
      if (iVar1 != 0) {
        FUN_0052e040();
        return iVar1;
      }
      if (DAT_00647624 != (HWND)0x0) {
        UpdateWindow(DAT_00647624);
      }
      puVar3 = (undefined4 *)&stack0x00000120;
      for (iVar1 = 0x24c; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      iVar1 = FUN_00532af0();
      FUN_0052e040();
      if (iVar1 < 0) {
        return iVar1;
      }
      if (in_stack_00001794 == 0) {
        _SfGetString_8();
        SfPrintF();
        FUN_005353d0();
      }
      FUN_00535b10();
      if (in_stack_00001794 == 0) {
        _Source = &DAT_006479a0;
      }
      else {
        _Source = (uchar *)(in_stack_00001790 + 0x238);
      }
      if (in_stack_00000530 < 2) {
        iVar1 = FUN_00535a00();
      }
      else {
        _mbscpy(&stack0x0000012c,_Source);
        lstrlenA(&stack0x0000012c);
        _SfGetString_8();
        SfPrintF();
        iVar5 = 0;
        do {
          SfPrintF();
          uVar4 = 0;
          uVar2 = 0;
          if (in_stack_00000530 != 0) {
            while( true ) {
              iVar1 = Mixer_BusMuted(uVar2);
              while (iVar1 != 0) {
                uVar2 = uVar2 + 1;
                iVar1 = Mixer_BusMuted(uVar2);
              }
              Mixer_GetDeviceName(&stack0x00000a50,0x104,1,uVar2);
              SfPrintF();
              iVar1 = _SfDoesFileExist_4();
              if (iVar1 != 0) break;
              iVar1 = 0;
              uVar4 = uVar4 + 1;
              if (in_stack_00000530 <= uVar4) {
                SfPrintF();
                goto LAB_00535f67;
              }
            }
          }
          iVar1 = -0x7fffbffb;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 1000);
      }
LAB_00535f67:
      _splitpath(&stack0x0000012c,&stack0x00000230,&stack0x00000c58,&stack0x00000330,
                 &stack0x00000430);
      _mbscat(&stack0x00000230,&stack0x00000c58);
      if (iVar1 < 0) {
        FUN_00532510();
        return iVar1;
      }
      iVar1 = FUN_00535250();
    }
  }
  return iVar1;
}


