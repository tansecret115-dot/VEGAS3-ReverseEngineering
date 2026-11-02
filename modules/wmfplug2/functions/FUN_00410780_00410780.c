/* Module: wmfplug2.dll
   Function: FUN_00410780
   Address: 00410780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00410780(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_ESI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_4;
  
  iVar2 = (**(code **)(*param_2 + 0x48))(param_2,&param_2,&local_4);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (*(int *)(local_4 + 0x40) != 0x28) {
    return -0x7ff8ffa9;
  }
  if ((*(int *)(*(int *)((int)this + 0x424) + 0x3e) == 0) ||
     (*(uint *)(*(int *)((int)this + 0x424) + 0x3a) < 0xa4)) {
    puVar3 = (undefined4 *)FUN_0040c450(*(int *)((int)this + 0xc));
    if (puVar3 == (undefined4 *)0x0) {
      return -0x7ff8fff2;
    }
    puVar7 = *(undefined4 **)(*(int *)((int)this + 0x424) + 0x3e);
    if (puVar7 != (undefined4 *)0x0) {
      uVar6 = *(uint *)(*(int *)((int)this + 0x424) + 0x3a);
      puVar8 = puVar3;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_0040c4a0(*(int *)(unaff_ESI + 0xc));
    }
    *(undefined4 **)(*(int *)((int)this + 0x424) + 0x3e) = puVar3;
    if (*(int *)(*(int *)((int)this + 0x424) + 0x3e) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x424) + 0x3a) = 0xa4;
    }
  }
  iVar1 = local_4;
  iVar2 = *(int *)(*(int *)((int)this + 0x424) + 0x3e);
  if (iVar2 == 0) {
    return -0x7ff8fff2;
  }
  *(undefined4 *)(iVar2 + 4) = 1;
  *(undefined4 *)(iVar2 + 0xc) = 1;
  *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(local_4 + 0x50);
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(local_4 + 0x14);
  uVar4 = ftol();
  *(undefined4 *)(iVar2 + 100) = uVar4;
  *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(local_4 + 0x20);
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(local_4 + 0x1c);
  *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar1 + 0x54);
  *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(iVar1 + 0x58);
  *(undefined4 *)(iVar2 + 0x80) = 1;
  *(undefined4 *)(iVar2 + 0x7c) = 8;
  *(undefined4 *)(iVar2 + 0x84) = 0xc;
  *(undefined4 *)(iVar2 + 0x88) = 2;
  *(undefined4 *)(iVar2 + 0x8c) = 0x14;
  *(undefined4 *)(iVar2 + 0x90) = *(undefined4 *)(iVar1 + 0x5c);
  *(undefined4 **)(iVar2 + 0x74) = (undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(iVar2 + 0x78) = 0x28;
  return 0;
}


