/* Module: vegas30.exe
   Function: FUN_0045aa50
   Address: 0045aa50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045aa50(HWND param_1,int *param_2)

{
  int dwNewLong;
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  dwNewLong = *param_2;
  if (dwNewLong == 0) {
    return 0;
  }
  uVar3 = 1;
  puVar4 = (undefined4 *)(dwNewLong + 0x54);
  do {
    pcVar1 = (code *)**(undefined4 **)*puVar4;
    if ((pcVar1 != (code *)0x0) &&
       (iVar2 = (*pcVar1)(dwNewLong,(undefined4 *)*puVar4,0), iVar2 == 0)) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 < 0x10);
  pcVar1 = *(code **)**(undefined4 **)(dwNewLong + 0x50);
  if ((pcVar1 != (code *)0x0) &&
     (iVar2 = (*pcVar1)(dwNewLong,*(undefined4 **)(dwNewLong + 0x50),0), iVar2 == 0)) {
    return 0;
  }
  *(HWND *)(dwNewLong + 4) = param_1;
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_00455300(dwNewLong);
  FUN_004543c0(dwNewLong,*(undefined4 *)(dwNewLong + 0xb88),*(undefined4 *)(dwNewLong + 0xb8c),
               *(undefined4 *)(dwNewLong + 0xb90),*(undefined4 *)(dwNewLong + 0xb94),1);
  return 1;
}


