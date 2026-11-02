/* Module: vegas30k.dll
   Function: FUN_01191a20
   Address: 01191a20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01191ac6) */

undefined4 __fastcall FUN_01191a20(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (((*(uint *)(param_1 + 0xc) & 1) != 0) && ((*(uint *)(param_1 + 0xc) & 0x100) == 0)) {
    uVar5 = *(uint *)(param_1 + 0x1160);
    if (*(uint *)(param_1 + 0x1160) < *(uint *)(param_1 + 0x1168)) {
      uVar5 = *(uint *)(param_1 + 0x1168);
    }
    iVar3 = _SfGetMillisec_0();
    lVar8 = __allmul(iVar3 - uVar5,0,10000,0);
    uVar5 = *(uint *)(param_1 + 0xc);
    if ((uVar5 & 0x2000) == 0) {
      uVar4 = 0;
      iVar3 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x1170);
      iVar3 = *(int *)(param_1 + 0x1174);
    }
    iVar1 = *(int *)(param_1 + 0x117c);
    uVar2 = *(uint *)(param_1 + 0x1178);
    if ((iVar1 < iVar3) || ((uVar6 = uVar2, iVar7 = iVar1, iVar1 <= iVar3 && (uVar2 <= uVar4)))) {
      if ((uVar5 & 0x2000) == 0) {
        uVar6 = 0;
        iVar7 = 0;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x1170);
        iVar7 = *(int *)(param_1 + 0x1174);
      }
    }
    if ((CONCAT44(iVar7,uVar6) < lVar8) && ((uVar5 & 0x800) != 0)) {
      *(uint *)(param_1 + 0xc) = uVar5 | 0x500;
      uVar5 = *(uint *)(param_1 + 0x28);
      if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        return 0;
      }
    }
    else {
      uVar5 = __alldiv(uVar2,iVar1,10000,0);
      if (*(uint *)(param_1 + 0x28) < uVar5) {
        uVar5 = *(uint *)(param_1 + 0x28);
      }
    }
    *(uint *)(param_1 + 0x28) = uVar5;
    return 0;
  }
  return 0;
}


