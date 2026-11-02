/* Module: vegas30.exe
   Function: FUN_004a4e80
   Address: 004a4e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a4e80(int param_1)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  
  iVar4 = Transport_IsRecording();
  bVar2 = false;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x408) != 0) {
    pbVar7 = (byte *)(param_1 + 0x424);
    do {
      uVar1 = *(uint *)(pbVar7 + -4);
      if (0x9d6f < uVar1) {
        if (uVar1 < 0x9d74) {
          bVar3 = *pbVar7;
          if (iVar4 == 0) {
            if ((bVar3 & 4) == 0) {
              bVar3 = bVar3 | 4;
              goto LAB_004a4ef8;
            }
          }
          else {
joined_r0x004a4ef4:
            if ((bVar3 & 4) != 0) {
              bVar3 = bVar3 & 0xfb;
LAB_004a4ef8:
              *pbVar7 = bVar3;
              bVar2 = true;
            }
          }
        }
        else if (uVar1 == 0x9d76) {
          lVar5 = Mixer_NumBusTypePorts(0x100);
          bVar3 = *pbVar7;
          if (lVar5 < 1) goto joined_r0x004a4ef4;
          if ((bVar3 & 4) == 0) {
            bVar3 = bVar3 | 4;
            goto LAB_004a4ef8;
          }
        }
      }
      uVar6 = uVar6 + 1;
      pbVar7 = pbVar7 + 0x1c;
    } while (uVar6 < *(uint *)(param_1 + 0x408));
    if (((bVar2) && (param_1 != -0x810)) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x818),0);
    }
  }
  return;
}


