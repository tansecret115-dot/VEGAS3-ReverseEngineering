/* Module: ednt3260.dll
   Function: FUN_630f64c0
   Address: 630f64c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f64c0(void *this,short *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  psVar3 = param_1;
  iVar2 = *(int *)((int)this + 0x62fa);
  sVar1 = *(short *)((int)this + 0x6300);
  *(undefined2 *)((int)this + 0x3fb8a) = 0;
  *(undefined2 *)((int)this + 0x3fb8c) = 0;
  *(undefined2 *)((int)this + 0x3fb8e) = 0;
  local_8 = 0;
  if (0 < *(short *)((int)this + 0x6344)) {
    iVar4 = (int)param_1 * 0x9e2;
    local_c = (int)param_1 * 0x2800 + 0x1e8ba + (int)this;
    param_1 = (short *)((int)this + (int)param_1 * 10 + 0xb06c);
    do {
      FUN_630f98e0(this,local_c,iVar4 + *(int *)((int)this + 0x1b836),0,*param_1);
      if ((*(short *)((int)this + (int)psVar3 * 2 + 0x63fc) != 0) &&
         (local_8 == *(short *)((int)this + (int)psVar3 * 2 + 0x6444))) {
        FUN_630f98e0(this,*(int *)((int)this + (int)psVar3 * 4 + 0x1b932),
                     *(int *)(*(int *)((int)this + 0x1b86a) + (int)psVar3 * 4),
                     *(short *)((int)this + (int)psVar3 * 2 + 0x6468),
                     *(short *)((int)this + (int)psVar3 * 2 + 0x6474));
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 1;
      local_c = local_c + 0x800;
      iVar4 = iVar4 + 0x1fa;
    } while (local_8 < *(short *)((int)this + 0x6344));
  }
  if (*(short *)((int)this + 0x6312) != 0) {
    FUN_630f98e0(this,(int)this + (int)psVar3 * 0x38 + 0x2d8ba,
                 (int)this + (int)psVar3 * 0xe + 0x14088,0,
                 *(short *)((int)this + (int)psVar3 * 2 + 0xb0a8));
  }
  if ((short)(((short)((*(int *)((int)this + 0x62fa) - iVar2 >> 1) << 4) - sVar1) +
             *(short *)((int)this + 0x6300)) != *(short *)((int)this + (int)psVar3 * 2 + 0x3fbd2)) {
    FUN_630f92d0();
  }
  return;
}


