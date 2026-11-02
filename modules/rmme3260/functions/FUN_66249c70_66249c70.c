/* Module: rmme3260.dll
   Function: FUN_66249c70
   Address: 66249c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66249c70(void *this,RECT *param_1,uint *param_2)

{
  BOOL BVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  tagRECT local_14;
  
  BVar1 = IntersectRect(&local_14,param_1,(RECT *)((int)this + 0x894));
  if (BVar1 != 0) {
    local_1c = ((RECT *)((int)this + 0x894))->left;
    local_24 = local_14.left - local_1c;
    local_20 = local_14.top - *(int *)((int)this + 0x898);
    local_1c = local_14.right - local_1c;
    local_18 = local_14.bottom - *(int *)((int)this + 0x898);
    FUN_6624bb00(*(uint **)((int)this + 8),(int)this + 0xc,param_2,&local_24,&local_14.left);
    local_1c = local_14.right;
    local_24 = local_14.left;
    FUN_6624bb00(*(uint **)((int)this + 8),(int)param_2,(uint *)((int)this + 0x450),&local_14.left,
                 &local_24);
  }
  return;
}


