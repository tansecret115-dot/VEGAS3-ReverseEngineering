/* Module: pncrt.dll
   Function: strcat
   Address: 7802c920
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl strcat(char *_Dest,char *_Source)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)_Dest;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_7802c93c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_7802c96f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x7802c98b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_7802c93c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x7802c98b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x7802c98b;
    }
  }
LAB_7802c96f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x7802c98b:
  do {
    if (((uint)_Source & 3) == 0) {
      do {
        uVar2 = *(uint *)_Source;
        uVar4 = *(uint *)_Source;
        _Source = (char *)((int)_Source + 4);
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_7802c9f8:
            *(byte *)puVar5 = (byte)uVar4;
            return _Dest;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return _Dest;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return _Dest;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return _Dest;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*(uint *)_Source;
    uVar4 = (uint)bVar1;
    _Source = (char *)((int)_Source + 1);
    if (bVar1 == 0) goto LAB_7802c9f8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


