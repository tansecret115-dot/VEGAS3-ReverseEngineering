/* Module: rmbe3260.dll
   Function: thunk_FUN_66044130
   Address: 66043ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void thunk_FUN_66044130(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_66075314 != (int *)0x0) {
    iVar1 = DAT_66075314[3];
    while (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_66058860(DAT_66075314);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar1 = DAT_66075314[3];
    }
    if (DAT_66075314 != (int *)0x0) {
      (**(code **)*DAT_66075314)(1);
    }
  }
  if (DAT_66075310 != (undefined4 *)0x0) {
    (**(code **)*DAT_66075310)(1);
    DAT_66075310 = (undefined4 *)0x0;
  }
  DAT_66075318 = 0;
  return;
}


