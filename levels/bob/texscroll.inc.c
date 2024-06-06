void scroll_bob_dl_SANDYFLOOR_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_SANDYFLOOR_mesh_layer_1_vtx_0);

	deltaX = (int)(2.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sts_mat_bob_dl_movingSand() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_movingSand);
	shift_s(mat, 7, PACK_TILESIZE(0, 1));
	shift_t(mat, 7, PACK_TILESIZE(0, 1));
};

void scroll_bob() {
	scroll_bob_dl_SANDYFLOOR_mesh_layer_1_vtx_0();
	scroll_sts_mat_bob_dl_movingSand();
}
