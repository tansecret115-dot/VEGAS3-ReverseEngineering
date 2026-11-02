/* Module: rmbe3260.dll
   Function: FUN_6605d6d0
   Address: 6605d6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6605d6d0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (puVar3 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  do {
    iVar2 = (*(code *)**(undefined4 **)this)(*puVar3,param_1);
    if (iVar2 == 0) {
      piVar1 = (int *)puVar3[1];
      *param_2 = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      return 0;
    }
    puVar3 = (undefined4 *)puVar3[2];
  } while (puVar3 != (undefined4 *)0x0);
  return 0x80004005;
}


