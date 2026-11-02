/* Module: encn3260.dll
   Function: FUN_664ccc20
   Address: 664ccc20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664ccc20(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 9;
  }
  *(int **)((int)this + 0x48) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)**(undefined4 **)((int)this + 0x48))
                    (*(undefined4 **)((int)this + 0x48),&DAT_664dc6c0,(int)this + 0x4c);
  if (iVar1 != 0) {
    return 9;
  }
  iVar1 = (**(code **)**(undefined4 **)((int)this + 0x48))
                    (*(undefined4 **)((int)this + 0x48),&DAT_664dcb00,(int)this + 0x40);
  if (iVar1 != 0) {
    return 9;
  }
  (**(code **)**(undefined4 **)((int)this + 0x48))
            (*(undefined4 **)((int)this + 0x48),&DAT_664dcca0,(int)this + 0x44);
  return 0;
}


