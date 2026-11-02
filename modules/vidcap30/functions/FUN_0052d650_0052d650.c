/* Module: vidcap30.exe
   Function: FUN_0052d650
   Address: 0052d650
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0052d650(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  HGLOBAL hMem;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EDI;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
  uVar9 = *(uint *)(param_1 + 4);
  uVar6 = 0x10015;
  if ((0x10015 < uVar9) || (uVar6 = uVar9, 0x16 < uVar9)) {
    iVar2 = uVar9 - uVar6;
    uVar9 = uVar6;
    iVar3 = (**(code **)(*(int *)(param_1 + 0xc) + 8))
                      (*(undefined4 *)(param_1 + 8),0,iVar2,uVar6,local_8,local_c);
    if ((-1 < iVar3) && ((uVar9 != 0 && (iVar2 != 0)))) {
      iVar3 = uVar6 - 0x16;
      do {
        if (iVar3 == 0) {
LAB_0052d739:
          (**(code **)(*(int *)(param_1 + 0xc) + 0xc))(uVar9);
          return uVar9;
        }
        puVar7 = (undefined4 *)(iVar2 + iVar3);
        if (*(int *)(iVar2 + iVar3) == 0x6054b50) {
          if ((*(short *)((int)puVar7 + 6) == 0) &&
             (*(ushort *)(puVar7 + 5) + 0x16 + iVar3 <= uVar6)) {
            puVar4 = puVar7;
            puVar8 = (undefined4 *)(param_1 + 0x14);
            for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar8 = puVar8 + 1;
            }
            *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
            hMem = GlobalAlloc(0x42,*(ushort *)(puVar7 + 5) + 1);
            puVar4 = GlobalLock(hMem);
            *(undefined4 **)(unaff_EDI + 0x2c) = puVar4;
            uVar1 = *(ushort *)(puVar7 + 5);
            puVar7 = (undefined4 *)(iVar2 + 0x16 + iVar3);
            for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar4 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar4 = puVar4 + 1;
            }
            for (uVar6 = uVar1 & 3; param_1 = unaff_EDI, uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar4 = (undefined4 *)((int)puVar4 + 1);
            }
          }
          goto LAB_0052d739;
        }
        iVar3 = iVar3 + -1;
      } while( true );
    }
  }
  return 0x80070057;
}


