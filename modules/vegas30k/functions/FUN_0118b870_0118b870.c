/* Module: vegas30k.dll
   Function: FUN_0118b870
   Address: 0118b870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0118b91d) */
/* WARNING: Removing unreachable block (ram,0x0118b927) */
/* WARNING: Removing unreachable block (ram,0x0118b92d) */

int __thiscall FUN_0118b870(int param_1,uint param_2)

{
  int iVar1;
  int *unaff_EBP;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_8 [2];
  
  iVar2 = -0x7fffbffb;
  if ((param_2 & 0x20000000) == 0) {
    if ((param_2 & 0x80000000) != 0) {
      piVar3 = *(int **)(param_1 + 0x1f8);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      *(undefined4 *)(param_1 + 0x1f8) = 0;
      iVar2 = 0;
    }
  }
  else {
    piVar3 = *(int **)(param_1 + 0x1f0);
    if (piVar3 != (int *)0x0) {
      local_8[0] = (int *)0x0;
      iVar2 = (**(code **)(*piVar3 + 0x1fc))(piVar3,local_8);
      if (-1 < iVar2) {
        piVar3 = (int *)&param_2;
        piVar4 = (int *)0x0;
        param_2 = 0;
        iVar1 = (**(code **)(*local_8[0] + 0xc))(local_8[0],1);
        if (iVar1 == 0) {
          do {
            (**(code **)(*unaff_EBP + 0x8c))(unaff_EBP,0xf,&stack0xffffffec);
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
            iVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,1,&stack0xfffffff0,0);
          } while (iVar1 == 0);
          (**(code **)(*piVar4 + 8))(piVar4);
        }
        else {
          (**(code **)(*piVar4 + 8))(piVar4);
        }
      }
    }
  }
  piVar3 = *(int **)(param_1 + 0x1fc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(param_1 + 0xcc));
  }
  return iVar2;
}


