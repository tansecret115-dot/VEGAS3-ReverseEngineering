/* Module: vegas30.exe
   Function: FUN_005650d0
   Address: 005650d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0056531e) */
/* WARNING: Removing unreachable block (ram,0x00565327) */
/* WARNING: Removing unreachable block (ram,0x00565296) */
/* WARNING: Removing unreachable block (ram,0x00565258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005650d0(undefined4 param_1,int *param_2,int *param_3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  HGLOBAL hMem;
  int *piVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  uint extraout_EDX;
  int *unaff_EBP;
  int *unaff_ESI;
  uint *puVar7;
  int unaff_retaddr;
  int *local_258;
  int *local_254;
  undefined4 local_250;
  int iStack_24c;
  int iStack_248;
  ushort uStack_244;
  ushort uStack_242;
  undefined4 uStack_240;
  undefined8 uStack_23c;
  uint auStack_230 [9];
  WCHAR aWStack_20c [259];
  undefined2 uStack_6;
  
  local_258 = (int *)0x0;
  local_250 = 0;
  local_254 = (int *)0x0;
  (**(code **)(*param_3 + 4))(param_3);
  uVar6 = 1;
  psVar1 = *(short **)(unaff_retaddr + 0x2c);
  if (*psVar1 == 3) {
    uVar6 = 3;
  }
  iStack_24c = *(int *)(psVar1 + 2);
  uVar2 = ((ushort)psVar1[7] >> 3) * psVar1[1];
  _uStack_244 = CONCAT22(psVar1[7],uVar2);
  iStack_248 = (uint)uVar2 * iStack_24c;
  local_250 = CONCAT22(psVar1[1],uVar6);
  uStack_240 = (uint)uStack_240._2_2_ << 0x10;
  iVar3 = FUN_005f6920(&local_258);
  if (-1 < iVar3) {
    uStack_23c._0_4_ = iStack_24c;
    uStack_23c._4_4_ = 0;
    ftol();
    auStack_230[0] = extraout_EDX;
    uStack_23c = ftol();
    hMem = GlobalAlloc(0x40,0x20);
    piVar4 = GlobalLock(hMem);
    if (piVar4 == (int *)0x0) {
      local_254 = (int *)0x0;
      iVar3 = -0x7ff8fff2;
    }
    else {
      piVar4[2] = 0;
      piVar4[4] = 0;
      *piVar4 = (int)&PTR_LAB_0061b50c;
      piVar4[1] = 0;
      piVar4[3] = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      piVar4[7] = 0;
      local_254 = piVar4;
      (**(code **)(*piVar4 + 4))(piVar4);
      (**(code **)(*(int *)piVar4[7] + 8))((int *)piVar4[7]);
      piVar4[2] = 0;
      piVar4[4] = 0;
      piVar4[7] = 0;
      piVar4[6] = 0;
      piVar4[3] = 0;
      piVar4[5] = 0;
      iVar3 = (**(code **)(*DAT_0064b510 + 0x54))(DAT_0064b510,&stack0xfffffd9c,&DAT_0061b3b0);
      if (-1 < iVar3) {
        uVar5 = (**(code **)(_DAT_00000000 + 0x10))(0);
        puVar7 = auStack_230;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        auStack_230[1] = auStack_230[1] & 0xfffffffe;
        auStack_230[0] = 0x20;
        iVar3 = (**(code **)(*DAT_0064b510 + 0x74))
                          (DAT_0064b510,uVar5,&local_254,1,auStack_230,0,0,0,1);
        if ((((-1 < iVar3) && (iVar3 = (**(code **)(_DAT_00000000 + 0x44))(0,0), -1 < iVar3)) &&
            (iVar3 = (**(code **)(_DAT_00000000 + 0x34))(0,&stack0xfffffda0,0,0,0), -1 < iVar3)) &&
           (iVar3 = (**(code **)(*unaff_EBP + 0x3c))(unaff_EBP,piVar4,0), -1 < iVar3)) {
          MultiByteToWideChar(0,1,(LPCSTR)param_3,-1,aWStack_20c,0x104);
          uStack_6 = 0;
          iVar3 = (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,aWStack_20c);
          if (-1 < iVar3) {
            iVar3 = (**(code **)(*unaff_EBP + 0x44))(unaff_EBP,param_2);
          }
        }
      }
    }
  }
  (**(code **)(*param_2 + 8))(param_2);
  if (local_258 != (int *)0x0) {
    (**(code **)(*local_258 + 8))(local_258);
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return iVar3;
}


