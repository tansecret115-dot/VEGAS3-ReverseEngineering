/* Module: vegas30.exe
   Function: FUN_00564100
   Address: 00564100
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00564100(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  HGLOBAL hMem;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_retaddr;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined4 uVar12;
  int *piVar13;
  
  iVar4 = *(int *)(param_1 + 0x14);
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    if (param_2 != 0) {
      if (*(int *)(param_1 + 0x110) != 0) {
        FUN_005338d0(DAT_0064b138);
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
      FUN_005a03a0(param_1 + 0x48);
    }
    return 0;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    if (param_2 == 0) {
      return 0x4e002;
    }
    puVar1 = (uint *)(param_1 + 0x48);
    iVar3 = FUN_00562b10(&DAT_0064b538,param_1 + 0x80,param_1 + 0x90,
                         *(uint *)(param_1 + 0x48) >> 1 & 1);
    *(int *)(param_1 + 0x34) = iVar3;
    uVar12 = DAT_0064b138;
    while (DAT_0064b138 = uVar12, iVar3 == 0) {
      iVar3 = SfMsgBox(DAT_00647624,1,
                       "Your device is offline.  Please reconnect it now and click OK.");
      if (iVar3 != 1) {
        return -0x7ffb1ff4;
      }
      Sleep(1000);
      FUN_005625c0(&DAT_0064b538);
      iVar3 = FUN_00562b10(&DAT_0064b538,param_1 + 0x80,param_1 + 0x90,*puVar1 >> 1 & 1);
      *(int *)(param_1 + 0x34) = iVar3;
      uVar12 = DAT_0064b138;
    }
    if ((iVar4 != -0x7ffb1ff4) && (iVar4 = FUN_00533930(uVar12,param_1 + 0x118), -1 < iVar4)) {
      iVar3 = *(uint *)(param_1 + 0x9f8) - *(uint *)(param_1 + 0xb50);
      *(undefined4 *)(param_1 + 0x110) = 1;
      iVar8 = (*(int *)(param_1 + 0x9fc) - *(int *)(param_1 + 0xb54)) -
              (uint)(*(uint *)(param_1 + 0x9f8) < *(uint *)(param_1 + 0xb50));
      iVar4 = param_1 + 0xa48;
      puVar11 = puVar1;
      uVar5 = FUN_005ba4b0(uVar12,0);
      iVar4 = FUN_0059fce0(uVar12,uVar5,puVar11,iVar4,iVar3,iVar8);
      if ((-1 < iVar4) &&
         (((*(byte *)puVar1 & 2) == 0 &&
          (iVar3 = FUN_00568480(DAT_00647624,&DAT_0064a918,&DAT_0064a920), iVar3 == 0)))) {
        FUN_005338d0(DAT_0064b138);
        *(undefined4 *)(param_1 + 0x110) = 0;
        FUN_005a03a0(puVar1);
        return -0x7ffb1ff4;
      }
    }
  }
  else {
    if (param_2 == 0) {
      hMem = GlobalAlloc(0x40,0x28);
      piVar6 = GlobalLock(hMem);
      if (piVar6 == (int *)0x0) {
        return -0x7ff8fff2;
      }
      iVar3 = param_1 + 0xa48;
      piVar6[1] = 1;
      piVar6[4] = 1;
      *piVar6 = (int)&PTR_LAB_0061b3b8;
      piVar6[2] = param_1;
      piVar6[5] = 0;
      piVar6[8] = 0;
      piVar6[9] = 0;
      uVar2 = DAT_0064b138;
      uVar12 = *(undefined4 *)(param_1 + 0x44);
      iVar4 = param_1 + 0x48;
      uVar5 = *(undefined4 *)(param_1 + 0x40);
      uVar10 = *(undefined4 *)(param_1 + 0x3c);
      uVar9 = *(undefined4 *)(param_1 + 0x38);
      piVar13 = piVar6;
      uVar7 = FUN_005ba4b0(DAT_0064b138,0);
      FUN_005a0440(uVar2,uVar7,uVar9,uVar10,uVar5,uVar12,iVar4,iVar3,piVar13);
      (**(code **)(*piVar6 + 8))(piVar6);
      return unaff_retaddr;
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      FUN_005338d0(DAT_0064b138);
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    FUN_005a03a0(param_1 + 0x48);
  }
  param_1 = iVar4;
  return param_1;
}


