/* Module: encn3260.dll
   Function: FUN_664ca960
   Address: 664ca960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664ca960(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  piVar7 = (int *)0x0;
  if (DAT_664f2a44 != 0) {
    if (DAT_664f2a30 == 0) {
      piVar7 = (int *)FUN_664ba9f0(&DAT_664f2a34);
    }
    else {
      if (*(int *)(*(int *)(param_1 + 0x14) + 0xc) != 0) goto LAB_664caa30;
      piVar7 = *(int **)(DAT_664f2a38 + 8);
    }
    iVar5 = DAT_664f2a28;
    iVar1 = piVar7[2];
    iVar2 = piVar7[3];
    iVar3 = piVar7[1];
    uVar4 = *(undefined4 *)(param_1 + 4);
    if ((*(int *)(DAT_664f2a28 + 4) == 0) || (*(int *)(DAT_664f2a28 + 0xb1) == 0)) {
      assert(s_m_hLib_____raWSAAsyncGetHostByNa_664efeac,s___pub_win_sock_h_664efa08,0x14b);
    }
    uVar6 = (**(code **)(iVar5 + 0xb1))(uVar4,0x466,iVar3,iVar1,iVar2);
    FUN_664c3e40(*(void **)(param_1 + 0x14),uVar6,*piVar7);
    *(uint *)(*piVar7 + 0x32) = uVar6;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
LAB_664caa30:
  if ((DAT_664f2a30 == 0) && (piVar7 != (int *)0x0)) {
    FUN_664cb1a0((int)piVar7);
    operator_delete(piVar7);
  }
  return 1;
}


