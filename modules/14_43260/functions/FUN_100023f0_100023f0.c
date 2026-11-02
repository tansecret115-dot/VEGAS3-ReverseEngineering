/* Module: 14_43260.dll
   Function: FUN_100023f0
   Address: 100023f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_100023f0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 == 1) {
    *(undefined4 *)((int)this + 0x92a) = 0;
    *(undefined4 *)((int)this + 0x92e) = 0;
    *(undefined4 *)((int)this + 0x932) = 0;
    *(undefined4 *)((int)this + 0x936) = 0;
    *(undefined4 *)((int)this + 0x93a) = 0;
  }
  piVar1 = *(int **)((int)this + 0x26c);
  if (*piVar1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)((int)this + 0x284) + -1 + *piVar1;
  }
  *(int **)((int)this + 0x26c) = piVar1 + 1;
  iVar4 = piVar1[1];
  *(int **)((int)this + 0x26c) = piVar1 + 2;
  iVar2 = piVar1[2];
  *(int **)((int)this + 0x26c) = piVar1 + 3;
  iVar3 = piVar1[3];
  *(int **)((int)this + 0x26c) = piVar1 + 4;
  if (param_1 != 0) {
    FUN_10002120(this,*(undefined2 **)((int)this + 0x32e),*(int *)((int)this + 0x332),param_1);
  }
  uVar6 = *(uint *)((int)this + 0x264);
  puVar7 = (undefined4 *)(*(int *)((int)this + 0x39e) + iVar4 * uVar6 * 2);
  puVar8 = *(undefined4 **)((int)this + 0x322);
  for (uVar5 = (uVar6 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(int *)((int)this + 0x2e0) =
       (*(int *)(*(int *)((int)this + 0x3a6) + iVar4 * 4) >> 4) * *(int *)((int)this + 0x278) >> 8;
  uVar6 = *(uint *)((int)this + 0x264);
  puVar7 = (undefined4 *)(*(int *)((int)this + 0x3a2) + iVar2 * uVar6 * 2);
  puVar8 = *(undefined4 **)((int)this + 0x326);
  for (uVar5 = (uVar6 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(int *)((int)this + 0x2e4) =
       (*(int *)(*(int *)((int)this + 0x3aa) + iVar2 * 4) >> 4) * *(int *)((int)this + 0x278) >> 8;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x2dc) = 0;
  }
  else {
    iVar4 = FUN_10002620(this,*(short **)((int)this + 0x32e),*(int *)((int)this + 0x278));
    *(int *)((int)this + 0x2dc) = iVar4 >> 0xc;
  }
  FUN_10001a60(this,iVar3,param_1,*(int *)((int)this + 0x2dc),*(int *)((int)this + 0x2e0),
               *(int *)((int)this + 0x2e4),*(short **)((int)this + 0x32e),
               *(short **)((int)this + 0x322),*(short **)((int)this + 0x326),
               *(undefined2 **)((int)this + 0x32a));
  memmove(*(void **)((int)this + 0x332),
          (void *)((int)*(void **)((int)this + 0x332) + *(int *)((int)this + 0x264) * 2),
          (*(int *)((int)this + 0x264) * 0x7fffffff + *(int *)((int)this + 0x288)) * 2);
  uVar6 = *(uint *)((int)this + 0x264);
  puVar7 = *(undefined4 **)((int)this + 0x32a);
  puVar8 = (undefined4 *)(*(int *)((int)this + 0x332) + (*(int *)((int)this + 0x288) - uVar6) * 2);
  for (uVar5 = (uVar6 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  FUN_10001b80(this,*(undefined4 **)((int)this + 0x32a),*(undefined4 **)((int)this + 0x336),
               (undefined4 *)((int)this + 0x92a),*(short **)((int)this + 0x280),
               *(uint *)((int)this + 0x264));
  return;
}


