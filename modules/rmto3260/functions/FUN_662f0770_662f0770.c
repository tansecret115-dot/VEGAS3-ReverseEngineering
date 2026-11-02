/* Module: rmto3260.dll
   Function: FUN_662f0770
   Address: 662f0770
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f0770(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)this != 0) {
    return -0x7ffbff7a;
  }
  piVar1 = FUN_662f0880(0);
  *(int **)this = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*piVar1 + 0x10))(param_1,0x302,1), iVar2 == 0)) {
    return 0;
  }
  if (*(int **)this != (int *)0x0) {
    (**(code **)(**(int **)this + 0x18))();
    if (*(undefined4 **)this != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)this)(1);
    }
    *(undefined4 *)this = 0;
  }
  return iVar2;
}


