/* Module: mcplug.dll
   Function: FUN_0045aa30
   Address: 0045aa30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045aa30(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  byte *pbVar5;
  
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0:
    *(undefined4 *)(param_1 + 0x68) = 4;
    **(byte **)(param_1 + 100) =
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x58) + (uint)*(ushort *)(param_1 + 0x56) +
                       (uint)*(ushort *)(param_1 + 0x54)) / 3) >> 0xb) & 0x10) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x50) + (uint)*(ushort *)(param_1 + 0x4e) +
                       (uint)*(ushort *)(param_1 + 0x4c)) / 3) >> 10) & 0x20) +
         ((byte)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                 (uint)*(ushort *)(param_1 + 0x3c)) / 3 >> 8) & 0x80) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x48) + (uint)*(ushort *)(param_1 + 0x46) +
                       (uint)*(ushort *)(param_1 + 0x44)) / 3) >> 9) & 0x40) +
         (**(byte **)(param_1 + 100) & 0xf);
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x68) = 5;
    **(byte **)(param_1 + 100) =
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x58) + (uint)*(ushort *)(param_1 + 0x56) +
                       (uint)*(ushort *)(param_1 + 0x54)) / 3) >> 0xc) & 8) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x50) + (uint)*(ushort *)(param_1 + 0x4e) +
                       (uint)*(ushort *)(param_1 + 0x4c)) / 3) >> 0xb) & 0x10) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x48) + (uint)*(ushort *)(param_1 + 0x46) +
                       (uint)*(ushort *)(param_1 + 0x44)) / 3) >> 10) & 0x20) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                       (uint)*(ushort *)(param_1 + 0x3c)) / 3) >> 9) & 0x40) +
         (**(byte **)(param_1 + 100) & 0x87);
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x68) = 6;
    **(byte **)(param_1 + 100) =
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x58) + (uint)*(ushort *)(param_1 + 0x56) +
                       (uint)*(ushort *)(param_1 + 0x54)) / 3) >> 0xd) & 4) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x50) + (uint)*(ushort *)(param_1 + 0x4e) +
                       (uint)*(ushort *)(param_1 + 0x4c)) / 3) >> 0xc) & 8) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x48) + (uint)*(ushort *)(param_1 + 0x46) +
                       (uint)*(ushort *)(param_1 + 0x44)) / 3) >> 0xb) & 0x10) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                       (uint)*(ushort *)(param_1 + 0x3c)) / 3) >> 10) & 0x20) +
         (**(byte **)(param_1 + 100) & 0xc3);
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x68) = 7;
    **(byte **)(param_1 + 100) =
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x58) + (uint)*(ushort *)(param_1 + 0x56) +
                       (uint)*(ushort *)(param_1 + 0x54)) / 3) >> 0xe) & 2) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x50) + (uint)*(ushort *)(param_1 + 0x4e) +
                       (uint)*(ushort *)(param_1 + 0x4c)) / 3) >> 0xd) & 4) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x48) + (uint)*(ushort *)(param_1 + 0x46) +
                       (uint)*(ushort *)(param_1 + 0x44)) / 3) >> 0xc) & 8) +
         ((byte)((int)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                       (uint)*(ushort *)(param_1 + 0x3c)) / 3) >> 0xb) & 0x10) +
         (**(byte **)(param_1 + 100) & 0xe1);
    return;
  case 4:
    pbVar5 = *(byte **)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *pbVar5 = ((byte)((int)(((uint)*(ushort *)(param_1 + 0x58) + (uint)*(ushort *)(param_1 + 0x56) +
                            (uint)*(ushort *)(param_1 + 0x54)) / 3) >> 0xf) & 1) +
              ((byte)((int)(((uint)*(ushort *)(param_1 + 0x50) + (uint)*(ushort *)(param_1 + 0x4e) +
                            (uint)*(ushort *)(param_1 + 0x4c)) / 3) >> 0xe) & 2) +
              ((byte)((int)(((uint)*(ushort *)(param_1 + 0x48) + (uint)*(ushort *)(param_1 + 0x46) +
                            (uint)*(ushort *)(param_1 + 0x44)) / 3) >> 0xd) & 4) +
              ((byte)((int)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                            (uint)*(ushort *)(param_1 + 0x3c)) / 3) >> 0xc) & 8) + (*pbVar5 & 0xf0);
    *(byte **)(param_1 + 100) = pbVar5 + 1;
    return;
  case 5:
    pbVar5 = *(byte **)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x68) = 1;
    uVar2 = *(ushort *)(param_1 + 0x56);
    uVar3 = *(ushort *)(param_1 + 0x54);
    *pbVar5 = ((byte)((int)(((uint)*(ushort *)(param_1 + 0x50) + (uint)*(ushort *)(param_1 + 0x4e) +
                            (uint)*(ushort *)(param_1 + 0x4c)) / 3) >> 0xf) & 1) +
              ((byte)((int)(((uint)*(ushort *)(param_1 + 0x48) + (uint)*(ushort *)(param_1 + 0x46) +
                            (uint)*(ushort *)(param_1 + 0x44)) / 3) >> 0xe) & 2) +
              ((byte)((int)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                            (uint)*(ushort *)(param_1 + 0x3c)) / 3) >> 0xd) & 4) + (*pbVar5 & 0xf8);
    bVar1 = pbVar5[1];
    bVar4 = (byte)(((uint)*(ushort *)(param_1 + 0x58) + (uint)uVar2 + (uint)uVar3) / 3 >> 8);
    *(byte **)(param_1 + 100) = pbVar5 + 1;
    pbVar5[1] = (bVar4 ^ bVar1) & 0x7f ^ bVar4;
    return;
  case 6:
    pbVar5 = *(byte **)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x68) = 2;
    uVar2 = *(ushort *)(param_1 + 0x4e);
    uVar3 = *(ushort *)(param_1 + 0x4c);
    *pbVar5 = ((byte)((int)(((uint)*(ushort *)(param_1 + 0x48) + (uint)*(ushort *)(param_1 + 0x46) +
                            (uint)*(ushort *)(param_1 + 0x44)) / 3) >> 0xf) & 1) +
              ((byte)((int)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                            (uint)*(ushort *)(param_1 + 0x3c)) / 3) >> 0xe) & 2) + (*pbVar5 & 0xfc);
    pbVar5 = pbVar5 + 1;
    *(byte **)(param_1 + 100) = pbVar5;
    *pbVar5 = ((byte)(((uint)*(ushort *)(param_1 + 0x50) + (uint)uVar2 + (uint)uVar3) / 3 >> 8) &
              0x80) + ((byte)((int)(((uint)*(ushort *)(param_1 + 0x58) +
                                     (uint)*(ushort *)(param_1 + 0x56) +
                                    (uint)*(ushort *)(param_1 + 0x54)) / 3) >> 9) & 0x40) +
              (*pbVar5 & 0x3f);
    return;
  case 7:
    pbVar5 = *(byte **)(param_1 + 100);
    uVar2 = *(ushort *)(param_1 + 0x58);
    uVar3 = *(ushort *)(param_1 + 0x54);
    *pbVar5 = ((byte)((int)(((uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x3e) +
                            (uint)*(ushort *)(param_1 + 0x3c)) / 3) >> 0xf) ^ *pbVar5) & 1 ^ *pbVar5
    ;
    pbVar5 = pbVar5 + 1;
    *(undefined4 *)(param_1 + 0x68) = 3;
    *(byte **)(param_1 + 100) = pbVar5;
    *pbVar5 = ((byte)((int)(((uint)uVar2 + (uint)*(ushort *)(param_1 + 0x56) + (uint)uVar3) / 3) >>
                     10) & 0x20) +
              ((byte)(((uint)*(ushort *)(param_1 + 0x48) + (uint)*(ushort *)(param_1 + 0x46) +
                      (uint)*(ushort *)(param_1 + 0x44)) / 3 >> 8) & 0x80) +
              ((byte)((int)(((uint)*(ushort *)(param_1 + 0x50) + (uint)*(ushort *)(param_1 + 0x4e) +
                            (uint)*(ushort *)(param_1 + 0x4c)) / 3) >> 9) & 0x40) + (*pbVar5 & 0x1f)
    ;
  }
  return;
}


