/* Module: encn3260.dll
   Function: FUN_664c4d60
   Address: 664c4d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664c4d60(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  ushort uVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar5 = 0;
  bVar7 = false;
  bVar2 = false;
  if ((ushort)DAT_664f2970 != 0) {
    do {
      if (bVar7) {
        return;
      }
      pbVar6 = *(byte **)((int)&DAT_664f28d2 + (uint)uVar5 * 0xe);
      pbVar3 = param_1;
      if (pbVar6 != (byte *)0x0) {
        do {
          bVar1 = *pbVar3;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_664c4dbe:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_664c4dc3;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_664c4dbe;
          pbVar6 = pbVar6 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_664c4dc3:
        bVar7 = bVar2;
        if (iVar4 == 0) {
          *param_2 = *(undefined4 *)((int)&DAT_664f28c8 + (uint)uVar5 * 0xe);
          bVar2 = true;
          bVar7 = true;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ushort)DAT_664f2970);
  }
  return;
}


