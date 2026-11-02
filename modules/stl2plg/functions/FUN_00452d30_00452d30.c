/* Module: stl2plg.dll
   Function: FUN_00452d30
   Address: 00452d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00452d30(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  void *local_4;
  
  piVar1 = param_1;
  iVar3 = param_1[0x37];
  param_1[0x37] = iVar3 + 1U;
  if ((uint)param_1[0x32] <= iVar3 + 1U) {
    local_4 = this;
    if (*(char *)((int)param_1 + 0x11b) != '\0') {
      param_1[0x37] = 0;
      FUN_0044fd20(param_1,(undefined4 *)param_1[0x38],0,param_1[0x34] + 1);
      bVar5 = (char)piVar1[0x47] + 1;
      *(byte *)(piVar1 + 0x47) = bVar5;
      if (bVar5 < 7) {
        param_1 = (int *)(uint)*(byte *)((int)piVar1 + 0x121);
        do {
          uVar6 = (uint)bVar5;
          uVar2 = ((piVar1[0x30] - *(int *)(&DAT_0047182c + uVar6 * 4)) + -1 +
                  *(uint *)(&DAT_00471848 + uVar6 * 4)) / *(uint *)(&DAT_00471848 + uVar6 * 4);
          piVar1[0x36] = uVar2;
          piVar1[0x35] = ((int)param_1 * uVar2 + 7 >> 3) + 1;
          if (((piVar1[0x1a] & 2U) != 0) ||
             (piVar1[0x32] = (uint)((piVar1[0x31] - (&DAT_00471864)[uVar6]) + -1 +
                                   (&DAT_00471880)[uVar6]) / (uint)(&DAT_00471880)[uVar6],
             piVar1[0x36] != 0)) break;
          bVar5 = bVar5 + 1;
          *(byte *)(piVar1 + 0x47) = bVar5;
        } while (bVar5 < 7);
      }
      if (*(byte *)(piVar1 + 0x47) < 7) {
        return;
      }
    }
    if ((*(byte *)(piVar1 + 0x19) & 0x20) == 0) {
      piVar1[0x1f] = 1;
      piVar1[0x1e] = (int)&param_1;
      while( true ) {
        if (piVar1[0x1c] == 0) {
          if (piVar1[0x41] == 0) {
            do {
              FUN_00450790(piVar1,0);
              FUN_0044feb0(piVar1,&local_4,4);
              iVar3 = FUN_00450710((byte *)&local_4);
              piVar1[0x41] = iVar3;
              FUN_00418a60((int)piVar1);
              FUN_00450760(piVar1,(byte *)(piVar1 + 0x45),4);
              if (piVar1[0x45] != DAT_004717ac) {
                FUN_0044fa30(piVar1,"Not enough image data");
              }
            } while (piVar1[0x41] == 0);
          }
          piVar1[0x1c] = piVar1[0x2a];
          piVar1[0x1b] = piVar1[0x29];
          if ((uint)piVar1[0x41] < (uint)piVar1[0x2a]) {
            piVar1[0x1c] = piVar1[0x41];
          }
          FUN_00450760(piVar1,(byte *)piVar1[0x29],piVar1[0x1c]);
          piVar1[0x41] = piVar1[0x41] - piVar1[0x1c];
        }
        uVar2 = FUN_00450150(piVar1 + 0x1b,1);
        if (uVar2 == 1) break;
        if (uVar2 != 0) {
          pcVar4 = (char *)piVar1[0x21];
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "Decompression Error";
          }
          FUN_0044fa30(piVar1,pcVar4);
        }
        if (piVar1[0x1f] == 0) {
          FUN_0044fa30(piVar1,"Extra compressed data");
        }
      }
      if (((piVar1[0x1f] == 0) || (piVar1[0x1c] != 0)) || (piVar1[0x41] != 0)) {
        FUN_0044fa30(piVar1,"Extra compressed data");
      }
      piVar1[0x18] = piVar1[0x18] | 8;
      piVar1[0x19] = piVar1[0x19] | 0x20;
      piVar1[0x1f] = 0;
    }
    if ((piVar1[0x41] != 0) || (piVar1[0x1c] != 0)) {
      FUN_0044fa30(piVar1,"Extra compression data");
    }
    FUN_0044ff80((int)(piVar1 + 0x1b));
    piVar1[0x18] = piVar1[0x18] | 8;
  }
  return;
}


