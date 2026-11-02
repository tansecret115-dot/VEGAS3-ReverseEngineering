/* Module: rmto3260.dll
   Function: FUN_662efa10
   Address: 662efa10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662efa10(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 4);
  if (puVar2 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  do {
    iVar1 = (*(code *)**(undefined4 **)this)(*puVar2,param_1);
    if (iVar1 == 0) {
      *param_2 = puVar2[1];
      return 0;
    }
    puVar2 = (undefined4 *)puVar2[2];
  } while (puVar2 != (undefined4 *)0x0);
  return 0x80004005;
}


