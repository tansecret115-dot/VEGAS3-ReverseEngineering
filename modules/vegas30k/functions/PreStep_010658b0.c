/* Module: vegas30k.dll
   Function: PreStep
   Address: 010658b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CScanlineIntersect::PreStep(struct SCANLINESTEP *,long,void *,enum
   SF3DRENDERSTATE) */

void __thiscall
CScanlineIntersect::PreStep
          (CScanlineIntersect *this,SCANLINESTEP *param_1,long param_2,void *param_3,
          SF3DRENDERSTATE param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
                    /* 0x658b0  259
                       ?PreStep@CScanlineIntersect@@QAEXPAUSCANLINESTEP@@JPAXW4SF3DRENDERSTATE@@@Z
                        */
  if (*(int *)this < *(int *)(this + 8)) {
    *(int *)(param_1 + 8) = *(int *)this;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 8);
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(this + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)this;
  }
  if (*(int *)(this + 0x10) < *(int *)(this + 0x18)) {
    *(int *)(param_1 + 0x10) = *(int *)(this + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x18);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(this + 0x18);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x10);
  }
  iVar3 = *(int *)(param_1 + 8);
  *(int *)param_1 = iVar3;
  *(uint *)(param_1 + 4) = iVar3 + 0x4000U & 0xffffc000;
  *(long *)(param_1 + 0x18) = (param_2 + 1) * 0x4000;
  if (param_4 == 2) {
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(this + 0x44);
    iVar3 = *(int *)this - iVar3;
    if (iVar3 < 0x4001) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      goto LAB_010659e0;
    }
    *(int *)(param_1 + 0x8c) =
         (int)(((longlong)(*(int *)(this + 0x28) - *(int *)(this + 0x40)) * 0x4000) /
              (longlong)iVar3);
    uVar2 = (undefined4)
            (((longlong)(*(int *)(this + 0x30) - *(int *)(this + 0x44)) * 0x4000) / (longlong)iVar3)
    ;
  }
  else {
    if (param_4 != 3) goto LAB_010659e0;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(this + 0x2c);
    uVar2 = *(undefined4 *)(this + 0x34);
  }
  *(undefined4 *)(param_1 + 0x90) = uVar2;
LAB_010659e0:
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if ((*(int *)(param_1 + 0xc) < *(int *)param_1) &&
     (*(int *)(param_1 + 4) < *(int *)(param_1 + 0x10))) {
    if (((*(uint *)(this + 4) & 0x3fff) == 0) &&
       (*(int *)(this + 0xc) - *(uint *)(this + 4) == 0x4000)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      iVar1 = *(int *)(this + 4);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(int *)(param_1 + 0x20) = (iVar1 - iVar3) + 0x4000;
      iVar1 = *(int *)(this + 0xc);
      *(undefined4 *)(param_1 + 0x24) = 0x4000;
      *(int *)(param_1 + 0x40) = (iVar1 - iVar3) + 0x4000;
      iVar1 = *(int *)(this + 4);
      *(undefined4 *)(param_1 + 0x44) = 0x4000;
      *(int *)(param_1 + 0x28) = (iVar1 - iVar3) + 0x4000;
      iVar1 = *(int *)(this + 0xc);
      *(undefined4 *)(param_1 + 0x5c) = 2;
      *(int *)(param_1 + 0x48) = (iVar1 - iVar3) + 0x4000;
    }
  }
  else {
    ClipToPixelBoundries(this,param_1);
  }
  if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 0x94) = 1;
  }
  return;
}


