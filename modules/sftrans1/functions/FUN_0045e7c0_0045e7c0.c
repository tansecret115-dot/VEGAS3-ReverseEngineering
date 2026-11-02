/* Module: sftrans1.dll
   Function: FUN_0045e7c0
   Address: 0045e7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0045e7c0(int *param_1,undefined4 param_2,int *param_3,HWND param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *unaff_EDI;
  int *local_4;
  
  uVar3 = (uint)param_3 & 0xffff;
  local_4 = param_1;
  if ((uVar3 < 0x9e34) || (40999 < uVar3)) {
    if (41000 < uVar3) {
      if (uVar3 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    if (uVar3 == 41000) {
      FUN_004c5940(1,param_1[0xc],0x3eb,0xf,0);
      return 0;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    param_3 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00554c50,&param_3);
    }
    iVar2 = (**(code **)*param_3)(param_3,&DAT_00554ba0,&local_4);
    if (-1 < iVar2) {
      (**(code **)(*local_4 + 0x14))(local_4,uVar3 - 0x9e34);
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
    }
    uVar3 = 0;
  }
  if (uVar3 == 1000) {
    FUN_0045e5b0();
    *param_5 = 1;
    return 0;
  }
  if (uVar3 != 0x461) {
    return 0;
  }
  SendMessageA(param_4,0x702,0,(LPARAM)(param_1 + 0x1a));
  (**(code **)(*param_1 + 0x2c))(param_1);
  return 0;
}


