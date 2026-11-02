/* Module: vidcap30.exe
   Function: FUN_0042d8d0
   Address: 0042d8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_0042d8d0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int *unaff_EBP;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  int **ppiStack_188;
  undefined1 *puStack_184;
  int **ppiStack_180;
  int *piStack_178;
  int **ppiStack_174;
  int **ppiStack_170;
  int *apiStack_16c [4];
  undefined1 local_154 [4];
  undefined1 auStack_150 [8];
  int *piStack_148;
  int *piStack_124;
  int *piStack_118;
  int aiStack_110 [55];
  int *piStack_34;
  int iStack_30;
  
  apiStack_16c[3] = (int *)local_154;
  apiStack_16c[2] = param_1;
  apiStack_16c[1] = (int *)0x42d8e8;
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 != 0) {
LAB_0042da98:
    return (-(uint)(param_1 != (int *)0x0) & 0x7fffbffc) + 0x80004005;
  }
  apiStack_16c[1] = aiStack_110;
  ppiStack_170 = (int **)0x42d8ff;
  iVar1 = (**(code **)(*unaff_EBP + 0x20))();
  if (iVar1 == 0) {
    ppiStack_170 = apiStack_16c + 1;
    ppiStack_174 = (int **)&DAT_005a1998;
    piStack_178 = piStack_118;
    iVar1 = (**(code **)*piStack_118)();
    if (iVar1 != 0) {
      ppiStack_180 = (int **)0x42da8e;
      (**(code **)(*piStack_124 + 8))();
      ppiStack_180 = ppiStack_174;
      puStack_184 = (undefined1 *)0x42da98;
      (*(code *)(*ppiStack_174)[2])();
      goto LAB_0042da98;
    }
    ppiStack_180 = apiStack_16c + 2;
    puStack_184 = auStack_150;
    ppiStack_188 = ppiStack_174;
    (*(code *)(*ppiStack_174)[3])();
    FUN_0042dd00(ppiStack_180,&piStack_178,0,unaff_EBX);
    ppiVar5 = apiStack_16c + 2;
    piVar4 = piStack_178;
    (*(code *)(*ppiStack_180)[7])(ppiStack_180,0,piStack_178,apiStack_16c + 3);
    iVar1 = 0;
    if (0 < (int)puStack_184) {
      do {
        (**(code **)(*piVar4 + 0x1c))(piVar4,1,iVar1,&ppiStack_180,&ppiStack_188);
        if (((int)ppiStack_188 < 0x1000) &&
           (iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4,ppiVar5,iVar1), iVar2 == 0)) {
          FUN_0042dc00(piVar4,iVar1,1,&stack0xfffffe84);
          ppiVar3 = apiStack_16c;
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *ppiVar3 = (int *)0x0;
            ppiVar3 = ppiVar3 + 1;
          }
          piStack_34[6] = (int)piVar4;
          piStack_34[5] = (int)ppiStack_174;
          piStack_34[9] = iStack_30;
          piStack_34[3] = (int)ppiVar5;
          *piStack_34 = (int)apiStack_16c;
          piStack_34[7] = (int)ppiStack_188;
          piStack_34[4] = (int)ppiStack_180;
          apiStack_16c[1] = piStack_34;
          piStack_34[2] = iVar1;
          piStack_34[8] = (int)piStack_178;
          iVar2 = FUN_0042d8d0(unaff_EBX,apiStack_16c,iStack_30 + 1);
          if ((iVar2 != 0) && (iVar2 == 1)) {
            *piStack_34 = 0;
            FUN_0042dac0(piStack_34);
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)puStack_184);
    }
    (**(code **)(*piVar4 + 8))(piVar4);
    (**(code **)(*piStack_148 + 8))(piStack_148);
  }
  ppiStack_170 = (int **)apiStack_16c[2];
  ppiStack_174 = (int **)0x42da78;
  (**(code **)(*apiStack_16c[2] + 8))();
  return 0;
}


