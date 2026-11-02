/* Module: rmbe3260.dll
   Function: FUN_66048160
   Address: 66048160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66048160(void *this,uint param_1,short *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uStack_8;
  
  uStack_8 = (uint)this & 0xffff;
  iVar5 = 0;
  uVar2 = (**(code **)(**(int **)((int)this + 4) + 0x24))();
  uVar1 = (ulonglong)uVar2 % (ulonglong)(param_1 & 0xffff);
  if ((int)uVar1 == 0) {
    cVar4 = uStack_8._3_1_;
  }
  else {
    cVar4 = (char)param_1 - (char)uVar1;
  }
  *param_2 = (short)cVar4;
  while (('\0' < cVar4 && (cVar4 = cVar4 + -1, iVar5 == 0))) {
    iVar3 = (**(code **)(**(int **)((int)this + 4) + 0x30))((int)&uStack_8 + 2,1);
    if (iVar3 != 1) {
      iVar5 = (**(code **)(**(int **)((int)this + 4) + 4))();
    }
  }
  return iVar5;
}


