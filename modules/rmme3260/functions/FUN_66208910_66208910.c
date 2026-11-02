/* Module: rmme3260.dll
   Function: FUN_66208910
   Address: 66208910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66208910(int param_1,void *param_2)

{
  int iVar1;
  void *this;
  short sVar2;
  undefined4 uVar3;
  
  this = param_2;
  uVar3 = 0x80070057;
  if (param_2 != (void *)0x0) {
    sVar2 = FUN_662182a0((int)param_2);
    iVar1 = param_1;
    if (sVar2 != *(short *)(param_1 + 4)) {
      return 0x80004005;
    }
    if (*(undefined4 **)(param_1 + 10) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 10))(1);
      *(undefined4 *)(iVar1 + 10) = 0;
    }
    *(void **)(iVar1 + 10) = this;
    param_1 = 0;
    param_2 = (void *)0x0;
    uVar3 = FUN_66217fa0(this,&param_1,&param_2);
    *(void **)(iVar1 + 6) = param_2;
  }
  return uVar3;
}


