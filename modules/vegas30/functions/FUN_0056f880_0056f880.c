/* Module: vegas30.exe
   Function: FUN_0056f880
   Address: 0056f880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0056f880(int param_1)

{
  int iVar1;
  long lVar2;
  int unaff_EBP;
  int *unaff_EDI;
  int iVar3;
  ISFGraphBuilder *local_c;
  undefined4 local_8;
  int local_4;
  
  if (((*(int **)(param_1 + 0x2b0) != (int *)0x0) &&
      (local_4 = **(int **)(param_1 + 0x2b0), local_4 != 0)) && (iVar3 = 0, 0 < local_4)) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar3 * 4);
      if (*(int *)(iVar1 + 8) == 2) {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xffffff7f;
        local_c = (ISFGraphBuilder *)0x0;
        lVar2 = Mixer_GetDeviceGraph(&local_c,4,*(ulong *)(iVar1 + 0x224));
        if (-1 < lVar2) {
          local_8 = 0;
          (**(code **)(*(int *)local_c + 0x70))(local_c,2,&local_8);
          if (unaff_EBP != 0) {
            *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x80;
            FUN_00573730(iVar1);
          }
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        }
      }
      else if (*(int *)(iVar1 + 8) == 4) {
        local_c = (ISFGraphBuilder *)0x0;
        Mixer_HasBusFX(*(ulong *)(iVar1 + 0x224),(ulong *)&local_c);
        *(uint *)(iVar1 + 0xc) =
             (uint)(local_c != (ISFGraphBuilder *)0x0) << 7 | *(uint *)(iVar1 + 0xc) & 0xffffff7f;
      }
      else {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xffffff7f;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_4);
  }
  return;
}


