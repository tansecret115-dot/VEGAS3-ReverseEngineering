/* Module: ednt3260.dll
   Function: FUN_630f87d0
   Address: 630f87d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f87d0(void *this,short param_1,short param_2)

{
  double dVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  double local_c;
  
  fVar4 = (float10)FUN_630f9770(*(double **)((int)this + 0x868),1,0x100);
  iVar3 = (int)param_2;
  local_c = (double)(fVar4 + fVar4);
  dVar1 = *(double *)((int)this + iVar3 * 8 + 0x9cc);
  *(double *)((int)this + iVar3 * 8 + 0x9cc) = local_c;
  if (local_c < dVar1) {
    local_c = dVar1;
  }
  *(double *)((int)this + (iVar3 + param_1 * 6) * 8 + 0x8ac) = local_c;
  if (param_2 < *(short *)((int)this + 0x6344)) {
    sVar2 = FUN_630f95c0(local_c,4);
    *(ushort *)((int)this + (iVar3 + (param_1 + 0x17ae) * 5) * 2) =
         ((short)(sVar2 - 1U) < 0) - 1 & sVar2 - 1U;
  }
  return;
}


