/* Module: wmfplug2.dll
   Function: FUN_0041e9f0
   Address: 0041e9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0041e9f0(int param_1)

{
  uint uVar1;
  int *unaff_EBX;
  int iVar2;
  undefined4 **ppuStack_5c;
  undefined1 **ppuStack_58;
  undefined1 **ppuStack_54;
  int *piStack_50;
  undefined1 **ppuStack_4c;
  wchar_t *pwStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_34;
  undefined *puStack_30;
  undefined1 *puStack_2c;
  undefined1 auStack_1c [8];
  undefined1 local_14 [20];
  
  iVar2 = 0;
  puStack_34 = *(undefined4 **)(param_1 + 0x214);
  if (puStack_34 != (undefined4 *)0x0) {
    puStack_2c = local_14;
    *(undefined4 *)(param_1 + 0x228) = 0;
    puStack_30 = &DAT_0047b600;
    iVar2 = (**(code **)*puStack_34)();
    if (-1 < iVar2) {
      puStack_3c = &stack0xffffffd8;
      puStack_40 = &stack0xffffffdc;
      puStack_44 = auStack_1c;
      ppuStack_4c = &puStack_2c;
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(undefined4 *)(param_1 + 0x218) = 0;
      pwStack_48 = L"HasAudio";
      piStack_50 = (int *)0x0;
      ppuStack_54 = (undefined1 **)0x41ea65;
      iVar2 = (**(code **)(iRam00000000 + 0x14))();
      if ((-1 < iVar2) && (puStack_3c != (undefined1 *)0x0)) {
        *(undefined4 *)(param_1 + 0x218) = 1;
        *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
      }
      ppuStack_54 = &puStack_40;
      ppuStack_58 = &puStack_3c;
      ppuStack_5c = &puStack_34;
      puStack_3c = (undefined1 *)0x0;
      puStack_40 = (undefined1 *)0x4;
      iVar2 = (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,&puStack_44,L"HasVideo");
      if ((-1 < iVar2) && (ppuStack_54 != (undefined1 **)0x0)) {
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 2;
        *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
      }
      *(undefined4 *)(param_1 + 0x238) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      ppuStack_5c = (undefined4 **)0x0;
      if (*(int *)(param_1 + 0x228) != 0) {
        do {
          pwStack_48 = (wchar_t *)0x0;
          ppuStack_58 = (undefined1 **)0x4;
          iVar2 = (**(code **)(*piStack_50 + 0x14))
                            (piStack_50,&ppuStack_5c,L"Bitrate",&ppuStack_4c,&pwStack_48,
                             &ppuStack_58);
          if (-1 < iVar2) {
            uVar1 = *(uint *)(param_1 + 0x238);
            *(uint *)(param_1 + 0x238) = uVar1 + ((uint)pwStack_48 >> 3);
            *(uint *)(param_1 + 0x23c) =
                 *(int *)(param_1 + 0x23c) + (uint)CARRY4(uVar1,(uint)pwStack_48 >> 3);
          }
          ppuStack_5c = (undefined4 **)((int)ppuStack_5c + 1);
        } while (((uint)ppuStack_5c & 0xffff) < *(uint *)(param_1 + 0x228));
      }
      ppuStack_5c = (undefined4 **)0x0;
      ppuStack_58 = (undefined1 **)0x8;
      iVar2 = (**(code **)(*piStack_50 + 0x14))
                        (piStack_50,&ppuStack_5c,L"Duration",&ppuStack_4c,&puStack_44,&ppuStack_58);
      *(undefined4 ***)(param_1 + 0x230) = ppuStack_5c;
      *(undefined1 ***)(param_1 + 0x234) = ppuStack_58;
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
  }
  return iVar2;
}


