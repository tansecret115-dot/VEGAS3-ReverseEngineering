/* Module: vegas30k.dll
   Function: BeginFrame
   Address: 01066710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall A_Buffer::BeginFrame(struct tA_BUFFER_PARAM *) */

int __thiscall A_Buffer::BeginFrame(A_Buffer *this,tA_BUFFER_PARAM *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  A_Buffer *pAVar10;
  undefined4 *puVar11;
  A_Buffer *pAVar12;
  undefined1 local_20 [4];
  undefined4 local_1c [4];
  short local_c;
  char local_2;
  
                    /* 0x66710  18  ?BeginFrame@A_Buffer@@QAEHPAUtA_BUFFER_PARAM@@@Z */
  if (param_1 == (tA_BUFFER_PARAM *)0x0) {
    return 0;
  }
  pAVar10 = this + 0x2000;
  for (iVar7 = 0x1af; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pAVar10 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pAVar10 = pAVar10 + 4;
  }
  *(undefined4 *)(this + 0x126c4) = 0;
  if (*(int *)(this + 0x2010) == 0) {
    return 0;
  }
  iVar7 = _SfGetPixelType_4(*(int *)(this + 0x2010));
  iVar2 = _SfGetPixelType_4(*(undefined4 *)(this + 0x2000));
  iVar9 = 1;
  if (1 < *(int *)(this + 0x2210)) {
    pAVar10 = this + 0x2014;
    do {
      if (*(int *)pAVar10 == 0) {
        return 0;
      }
      iVar3 = _SfGetPixelType_4(*(int *)pAVar10);
      if (iVar3 != iVar7) {
        return 0;
      }
      iVar9 = iVar9 + 1;
      pAVar10 = pAVar10 + 4;
    } while (iVar9 < *(int *)(this + 0x2210));
  }
  puVar11 = local_1c;
  for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_1c[0] = 1;
  local_c = ftol();
  local_c = -1 - local_c;
  local_2 = ftol();
  local_2 = -1 - local_2;
  uVar4 = ftol();
  *(undefined4 *)(this + 0x126c8) = uVar4;
  _SfXCHGGetFunctionPointers_20(iVar2,iVar7,0x23,this + 0x2544,local_1c);
  _SfXCHGGetFunctionPointers_20(iVar2,iVar2,0x23,this + 0x2600,local_1c);
  *(undefined4 *)(this + 0x2694) = 0;
  *(undefined4 *)(this + 0x25d8) = 0;
  if (((iVar2 == 0x17) || (iVar2 == 0x18)) &&
     (iVar9 = _SfDibCreateColorQuantizer_8(this + 0x25d8,*(undefined4 *)(this + 0x2000)), iVar9 != 0
     )) {
    return 0;
  }
  piVar8 = *(int **)(this + 0x2010);
  if (piVar8[8] == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)piVar8 + *piVar8;
  }
  piVar8 = *(int **)(this + 0x2000);
  *(int *)(this + 0x25d0) = iVar9;
  if (piVar8[8] == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)piVar8 + *piVar8;
  }
  *(int *)(this + 0x25d4) = iVar9;
  if (piVar8[8] == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)piVar8 + *piVar8;
  }
  *(int *)(this + 0x268c) = iVar9;
  if (piVar8[8] == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)piVar8 + *piVar8;
  }
  *(int *)(this + 0x2690) = iVar9;
  piVar5 = *(int **)(this + 0x2004);
  if (piVar5 != (int *)0x0) goto LAB_0106692a;
  if (piVar8[4] == 0) {
    if (((piVar8[8] != 0) || (uVar1 = *(ushort *)((int)piVar8 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_01066922;
    iVar9 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (piVar8[4] == 3) {
      piVar5 = piVar8 + 0xd;
      goto LAB_0106692a;
    }
LAB_01066922:
    iVar9 = piVar8[8];
  }
  piVar5 = (int *)((int)piVar8 + *piVar8 + iVar9 * 4);
LAB_0106692a:
  *(int **)(this + 0x222c) = piVar5;
  iVar9 = *(int *)(this + 0x200c);
  if (iVar9 == 0) {
    uVar6 = (uint)*(ushort *)((int)piVar8 + 0xe) * piVar8[1] + 0x1f;
    iVar9 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
  }
  *(int *)(this + 0x2230) = iVar9;
  iVar2 = _SfGetPixelBitsPerChannel_8(iVar2,local_20);
  *(int *)(this + 0x2238) = iVar2;
  iVar9 = 0;
  *(int *)(this + 0x2234) = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  *(undefined4 *)(this + 0x223c) = *(undefined4 *)(*(int *)(this + 0x2000) + 4);
  *(undefined4 *)(this + 0x2240) = *(undefined4 *)(*(int *)(this + 0x2000) + 8);
  if (0 < *(int *)(this + 0x2210)) {
    pAVar10 = this + 0x2248;
    pAVar12 = this + 0x2010;
    do {
      piVar8 = *(int **)(pAVar12 + 0x80);
      piVar5 = *(int **)pAVar12;
      if (piVar8 == (int *)0x0) {
        if (piVar5[4] == 0) {
          if (((piVar5[8] != 0) || (uVar1 = *(ushort *)((int)piVar5 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010669e1;
          iVar2 = 1 << ((byte)uVar1 & 0x1f);
        }
        else {
          if (piVar5[4] == 3) {
            piVar8 = piVar5 + 0xd;
            goto LAB_010669eb;
          }
LAB_010669e1:
          iVar2 = piVar5[8];
        }
        piVar8 = (int *)(*piVar5 + iVar2 * 4 + (int)piVar5);
      }
LAB_010669eb:
      *(int **)(pAVar10 + -4) = piVar8;
      iVar2 = *(int *)(pAVar12 + 0x180);
      if (iVar2 == 0) {
        uVar6 = (uint)*(ushort *)(*(int *)pAVar12 + 0xe) * *(int *)(*(int *)pAVar12 + 4) + 0x1f;
        iVar2 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
      }
      *(int *)pAVar10 = iVar2;
      iVar2 = _SfGetPixelBitsPerChannel_8(iVar7,local_20);
      *(int *)(pAVar10 + 8) = iVar2;
      *(int *)(pAVar10 + 4) = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
      iVar9 = iVar9 + 1;
      *(int *)(pAVar10 + 0xc) = *(int *)(*(int *)pAVar12 + 4);
      *(int *)(pAVar10 + 0x10) = *(int *)(*(int *)pAVar12 + 8);
      pAVar10 = pAVar10 + 0x18;
      pAVar12 = pAVar12 + 4;
    } while (iVar9 < *(int *)(this + 0x2210));
  }
  for (iVar7 = 0x800; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)this = 0;
    this = this + 4;
  }
  return 1;
}


