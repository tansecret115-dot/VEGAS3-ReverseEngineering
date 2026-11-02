/* Module: sfppack1.dll
   Function: FUN_5cdb30c0
   Address: 5cdb30c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdb30c0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  int unaff_EDI;
  int *piVar5;
  bool bVar6;
  int *apiStack_50 [3];
  int local_34;
  undefined1 auStack_30 [48];
  
  apiStack_50[2] = (int *)0x0;
  apiStack_50[0] = &local_34;
  apiStack_50[1] = (int *)0x14;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if (-1 < iVar1) {
    if (unaff_EDI == 0x34) {
      iVar1 = 4;
      bVar6 = true;
      piVar3 = (int *)&stack0xffffffc0;
      piVar5 = &DAT_5ce12a58;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *piVar3 == *piVar5;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (bVar6) {
LAB_5cdb3117:
        iVar1 = (**(code **)(*param_1 + 0xc))(param_1,auStack_30,0x20,0);
        if (-1 < iVar1) {
          iVar2 = 4;
          bVar6 = true;
          ppiVar4 = apiStack_50;
          piVar3 = &DAT_5ce12a48;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar6 = *ppiVar4 == (int *)*piVar3;
            ppiVar4 = ppiVar4 + 1;
            piVar3 = piVar3 + 1;
          } while (bVar6);
          if (bVar6) {
            local_34 = local_34 * 10;
          }
          (**(code **)(*(int *)this + 0x10))(this,&stack0xffffffc0);
        }
        FUN_5cdb2ff0(this,100);
        return iVar1;
      }
      iVar1 = 4;
      bVar6 = true;
      piVar3 = (int *)&stack0xffffffc0;
      piVar5 = &DAT_5ce12a48;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *piVar3 == *piVar5;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (bVar6) goto LAB_5cdb3117;
    }
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}


