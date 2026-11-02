/* Module: encn3260.dll
   Function: FUN_664c1220
   Address: 664c1220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664c1220(void *this,undefined4 param_1,undefined4 *param_2)

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


