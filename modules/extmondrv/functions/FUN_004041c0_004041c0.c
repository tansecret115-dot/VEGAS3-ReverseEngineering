/* Module: extmondrv.dll
   Function: FUN_004041c0
   Address: 004041c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004041c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  HGLOBAL hMem;
  LPVOID this;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = param_1;
  iVar6 = 0;
  uVar3 = (param_1[6] + param_1[8]) * param_1[5];
  if ((uint)param_1[3] < uVar3) {
    puVar4 = FUN_004012d0((undefined4 *)param_1[4],uVar3,0,0,(SIZE_T *)&param_1,(SIZE_T *)0x0);
    if (puVar4 == (undefined4 *)0x0) {
LAB_004042a3:
      (**(code **)(*piVar2 + 0x30))(piVar2);
      return -0x7ff8fff2;
    }
    piVar2[4] = (int)puVar4;
    piVar2[3] = (int)param_1;
  }
  iVar7 = piVar2[4];
  piVar2[2] = iVar7;
  if (piVar2[0xf] < piVar2[5]) {
    do {
      hMem = GlobalAlloc(0x40,0xb8);
      this = GlobalLock(hMem);
      if ((this == (LPVOID)0x0) || (piVar5 = FUN_00403640(this,piVar2), piVar5 == (int *)0x0))
      goto LAB_004042a3;
      param_1 = piVar5;
      iVar6 = FUN_00415f10((int *)piVar2[0xe],-1,(int *)&param_1,1);
      if (iVar6 < 0) {
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0x4c))(1);
        }
        break;
      }
      (**(code **)(*piVar5 + 0x50))(piVar5,iVar7 + piVar2[8],piVar2[6]);
      iVar1 = piVar2[0xf];
      iVar7 = iVar7 + piVar2[6] + piVar2[8];
      piVar2[0xf] = iVar1 + 1;
    } while (iVar1 + 1 < piVar2[5]);
    if (iVar6 < 0) {
      (**(code **)(*piVar2 + 0x30))(piVar2);
      return iVar6;
    }
  }
  piVar2[9] = 0;
  return iVar6;
}


