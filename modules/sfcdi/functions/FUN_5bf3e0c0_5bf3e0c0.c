/* Module: sfcdi.dll
   Function: FUN_5bf3e0c0
   Address: 5bf3e0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3e0c0(undefined4 *param_1)

{
  int *piVar1;
  uchar *puVar2;
  uchar *puVar3;
  BYTE *pBVar4;
  uchar *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uchar local_200 [512];
  
  piVar1 = calloc(1,0x270);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    return -0x7ff8fff2;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x95));
  FUN_5bf3ce50((int)piVar1,(LPCSTR)0x0);
  iVar11 = 0;
  uVar10 = 0x10;
  uVar9 = 0;
  uVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  puVar5 = (uchar *)0x0;
  piVar12 = piVar1;
  puVar2 = FUN_5bf29180(DAT_5bf76078,0x107b);
  puVar3 = FUN_5bf29180(DAT_5bf76078,0x107b);
  iVar6 = FUN_5bf3dc10((int)piVar1,0,puVar3,puVar2,puVar5,iVar6,iVar7,uVar8,uVar9,uVar10,iVar11,
                       piVar12);
  if (-1 < iVar6) {
    iVar6 = FUN_5bf2b110(piVar1 + 1,4,-1,-1,0x40000002);
    if (iVar6 < 0) {
      pBVar4 = FUN_5bf29180(DAT_5bf76078,0x1083);
      FUN_5bf25750(local_200,pBVar4);
      FUN_5bf3ce50((int)piVar1,(LPCSTR)local_200);
    }
    else {
      *param_1 = piVar1;
    }
    if (-1 < iVar6) {
      return iVar6;
    }
  }
  FUN_5bf3e060(piVar1);
  *param_1 = 0;
  return iVar6;
}


