/* Module: vegas30k.dll
   Function: ClipToPixelBoundries
   Address: 01065350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x010657e3) */
/* WARNING: Removing unreachable block (ram,0x01065579) */
/* WARNING: Removing unreachable block (ram,0x01065439) */
/* WARNING: Removing unreachable block (ram,0x010654bb) */
/* WARNING: Removing unreachable block (ram,0x0106559d) */
/* WARNING: Removing unreachable block (ram,0x01065412) */
/* WARNING: Removing unreachable block (ram,0x010655e8) */
/* WARNING: Removing unreachable block (ram,0x01065755) */
/* private: void __thiscall CScanlineIntersect::ClipToPixelBoundries(struct SCANLINESTEP *) */

void __thiscall
CScanlineIntersect::ClipToPixelBoundries(CScanlineIntersect *this,SCANLINESTEP *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CScanlineIntersect *pCVar8;
  byte bVar9;
  CScanlineIntersect *pCVar10;
  
                    /* 0x65350  24
                       ?ClipToPixelBoundries@CScanlineIntersect@@AAEXPAUSCANLINESTEP@@@Z */
  pCVar10 = this + 0x18;
  pCVar8 = this + 0x10;
  if (*(int *)(this + 0x10) < *(int *)(this + 0x18)) {
    pCVar8 = pCVar10;
    pCVar10 = this + 0x10;
  }
  iVar1 = *(int *)pCVar10;
  if (iVar1 < *(int *)param_1) {
    bVar9 = 0;
  }
  else {
    bVar9 = ((*(int *)(param_1 + 4) <= iVar1) - 1U & 0xfe) + 4;
  }
  iVar2 = *(int *)pCVar8;
  if (*(int *)param_1 <= iVar2) {
    if (iVar2 < *(int *)(param_1 + 4)) {
      bVar9 = bVar9 | 0x10;
    }
    else {
      bVar9 = bVar9 | 0x20;
    }
  }
  iVar3 = *(int *)(param_1 + 4);
  iVar6 = (iVar1 - iVar3) + 0x4000;
  iVar4 = *(int *)(pCVar10 + 4);
  iVar7 = (iVar4 - *(int *)(param_1 + 0x18)) + 0x4000;
  iVar5 = *(int *)(pCVar8 + 4);
  if (((bVar9 & 4) == 0) || ((bVar9 & 0x20) == 0)) {
    if (((bVar9 & 2) != 0) && ((bVar9 & 0x20) != 0)) {
      *(int *)(param_1 + 0x1c) = iVar6;
      *(int *)(param_1 + 0x20) = iVar7;
      *(undefined4 *)(param_1 + 0x3c) = 0x4000;
      *(int *)(param_1 + 0x40) =
           ((int)(((longlong)(iVar5 - iVar4) * (longlong)(iVar3 - iVar1)) /
                 (longlong)(iVar2 - iVar1)) - *(int *)(param_1 + 0x18)) + 0x4000 + iVar4;
      *(undefined4 *)(param_1 + 0x5c) = 1;
      return;
    }
    if (((bVar9 & 2) != 0) && ((bVar9 & 0x10) != 0)) {
      *(int *)(param_1 + 0x1c) = iVar6;
      *(int *)(param_1 + 0x20) = iVar7;
      *(int *)(param_1 + 0x3c) = (iVar2 - iVar3) + 0x4000;
      *(int *)(param_1 + 0x40) = (iVar5 - *(int *)(param_1 + 0x18)) + 0x4000;
      *(undefined4 *)(param_1 + 0x5c) = 1;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}


