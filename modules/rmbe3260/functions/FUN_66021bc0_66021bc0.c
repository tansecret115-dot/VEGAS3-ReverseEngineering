/* Module: rmbe3260.dll
   Function: FUN_66021bc0
   Address: 66021bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66021bc0(void *this,int param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*(int *)((int)this + 0x1d6) == 0)) {
    return 0x80004003;
  }
  puVar2 = operator_new(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_6605c060(puVar2);
  }
  if (piVar3 == (int *)0x0) {
    return 0x8007000e;
  }
  (**(code **)(*piVar3 + 4))(piVar3);
  uVar5 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  (**(code **)(*piVar3 + 0x10))(piVar3,param_2,~uVar5);
  uVar4 = (**(code **)(**(int **)((int)this + 0x1d6) + 0x2c))
                    (*(int **)((int)this + 0x1d6),param_1,piVar3);
  (**(code **)(*piVar3 + 8))(piVar3);
  return uVar4;
}


