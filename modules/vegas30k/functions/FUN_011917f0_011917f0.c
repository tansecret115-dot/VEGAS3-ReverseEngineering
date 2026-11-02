/* Module: vegas30k.dll
   Function: FUN_011917f0
   Address: 011917f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011917f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x24),*(DWORD *)(param_1 + 0x28));
  pcVar6 = ResetEvent_exref;
  ResetEvent(*(HANDLE *)(param_1 + 0x24));
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    return 0;
  }
  do {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x24),*(DWORD *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    (*pcVar6)(*(undefined4 *)(param_1 + 0x24));
    iVar1 = _SfGetMillisec_0();
    if ((((*(uint *)(param_1 + 0xc) & 1) != 0) && (*(int *)(param_1 + 0x150) != 0)) &&
       ((*(uint *)(param_1 + 0xc) & 0x20000) == 0)) {
      puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x158) * 4);
      pcVar6 = ResetEvent_exref;
      while (ResetEvent_exref = pcVar6, puVar5 != (undefined4 *)0x0) {
        uVar4 = *(uint *)(param_1 + 0x148);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x3c))
                  (*(int **)(param_1 + 0x3c),
                   *(undefined4 *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x158) * 4),
                   *(undefined4 *)(param_1 + 0x148));
        *(undefined4 *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x158) * 4) = 0;
        uVar4 = *(int *)(param_1 + 0x158) + 1;
        *(uint *)(param_1 + 0x158) = uVar4;
        if (*(uint *)(param_1 + 0x144) <= uVar4) {
          *(undefined4 *)(param_1 + 0x158) = 0;
        }
        pcVar6 = ResetEvent_exref;
        puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x158) * 4);
      }
    }
    uVar4 = *(uint *)(param_1 + 0xc);
    if ((((uVar4 & 1) != 0) && ((uVar4 & 0x100) == 0)) &&
       (((uVar4 & 4) != 0 && ((uVar4 & 0x80) == 0)))) {
      iVar2 = FUN_01190070();
      if (iVar2 < 0) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x100;
      }
      else if (iVar2 == 0) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffefff | 0x800;
      }
    }
    uVar4 = *(uint *)(param_1 + 0xc);
    if (((uVar4 & 1) != 0) && ((uVar4 & 0x200) != 0)) {
      *(uint *)(param_1 + 0xc) = uVar4 & 0xfffeffff;
    }
    uVar4 = *(uint *)(param_1 + 0xc);
    if ((uVar4 & 0x300) == 0) {
      if ((uVar4 & 0x400) == 0) {
        FUN_01191a20();
      }
LAB_01191960:
      if ((*(uint *)(param_1 + 0xc) & 0x400) == 0) {
        iVar2 = _SfGetMillisec_0();
        if (*(uint *)(param_1 + 0x28) <= (uint)(iVar2 - iVar1)) goto LAB_011919cb;
        uVar7 = *(undefined4 *)(param_1 + 0x24);
      }
      else {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | 0x10;
        FUN_01191cd0();
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffe73f;
        iVar1 = FUN_01191cf0(0xffffffff,0xffffffff,3);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x1164) = 0;
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
        uVar7 = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffbfb;
      }
      (*pcVar6)(uVar7);
    }
    else {
      if ((uVar4 & 0x400) != 0) goto LAB_01191960;
      (*pcVar6)(*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    }
LAB_011919cb:
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      return 0;
    }
  } while( true );
}


