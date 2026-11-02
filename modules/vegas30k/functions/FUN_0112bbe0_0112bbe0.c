/* Module: vegas30k.dll
   Function: FUN_0112bbe0
   Address: 0112bbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0112bbe0(int param_1,int param_2,void *param_3,undefined4 param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
    iVar3 = 0;
  }
  else {
    iVar3 = piVar1[1] * iVar3 + piVar1[2];
  }
  memmove(param_3,(void *)(iVar3 + 0xc),8);
  if (param_2 == 2) {
    memmove((void *)((int)param_3 + 8),(void *)(param_1 + 0x72),0x800);
    *param_5 = 0x91c;
    return 0;
  }
  if (param_2 == 3) {
    puVar4 = (undefined4 *)((int)param_3 + 8);
    for (iVar3 = 0x247; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)((int)param_3 + 8) = 0xff;
    memmove((void *)((int)param_3 + 9),"CD001",5);
    *(undefined1 *)((int)param_3 + 0xe) = 1;
    *param_5 = 0x91c;
    return 0;
  }
  *param_5 = 0x91c;
  return 0;
}


