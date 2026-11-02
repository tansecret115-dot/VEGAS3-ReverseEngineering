/* Module: vegas30k.dll
   Function: FUN_01018c60
   Address: 01018c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01018c60(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  HGLOBAL hMem;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int unaff_EDI;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
  puVar10 = *(undefined1 **)(param_1 + 4);
  puVar7 = (undefined1 *)0x10015;
  if (((undefined1 *)0x10015 < puVar10) || (puVar7 = puVar10, (undefined1 *)0x16 < puVar10)) {
    iVar2 = (int)puVar10 - (int)puVar7;
    puVar10 = puVar7;
    iVar3 = (**(code **)(*(int *)(param_1 + 0xc) + 8))
                      (*(undefined4 *)(param_1 + 8),0,iVar2,puVar7,local_8,local_c);
    if ((-1 < iVar3) && ((puVar10 != (undefined1 *)0x0 && (iVar2 != 0)))) {
      puVar6 = puVar7 + -0x16;
      do {
        if (puVar6 == (undefined1 *)0x0) {
LAB_01018d49:
          (**(code **)(*(int *)(param_1 + 0xc) + 0xc))(puVar10);
          return puVar10;
        }
        puVar8 = (undefined4 *)(puVar6 + iVar2);
        if (*(int *)(puVar6 + iVar2) == 0x6054b50) {
          if ((*(short *)((int)puVar8 + 6) == 0) &&
             (puVar6 + *(ushort *)(puVar8 + 5) + 0x16 <= puVar7)) {
            puVar4 = puVar8;
            puVar9 = (undefined4 *)(param_1 + 0x14);
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar9 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar9 = puVar9 + 1;
            }
            *(undefined2 *)puVar9 = *(undefined2 *)puVar4;
            hMem = GlobalAlloc(0x42,*(ushort *)(puVar8 + 5) + 1);
            puVar4 = GlobalLock(hMem);
            *(undefined4 **)(unaff_EDI + 0x2c) = puVar4;
            uVar1 = *(ushort *)(puVar8 + 5);
            puVar8 = (undefined4 *)(puVar6 + iVar2 + 0x16);
            for (uVar5 = (uint)(uVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar4 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar4 = puVar4 + 1;
            }
            for (uVar5 = uVar1 & 3; param_1 = unaff_EDI, uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar4 = (undefined4 *)((int)puVar4 + 1);
            }
          }
          goto LAB_01018d49;
        }
        puVar6 = puVar6 + -1;
      } while( true );
    }
  }
  return &DAT_80070057;
}


